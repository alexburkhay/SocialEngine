//
//  LinkedInProfileFields.h
//  SocialEngine
//
//  Created by Maxim Letushov on 9/22/12.
//
//

#ifndef SocialEngine_LinkedInProfileFields_h
#define SocialEngine_LinkedInProfileFields_h

static const long LINKEDIN_PROFILE_FIELD__ID = 1;
static const long LINKEDIN_PROFILE_FIELD__FIRST_NAME = 2 << 1;
static const long LINKEDIN_PROFILE_FIELD__LAST_NAME = 2 << 2;
static const long LINKEDIN_PROFILE_FIELD__HEADLINE = 2 << 3;
static const long LINKEDIN_PROFILE_FIELD__LOCATION = 2 << 4;
// 32 reserved
static const long LINKEDIN_PROFILE_FIELD__INDUSTRY = 2 << 6;
static const long LINKEDIN_PROFILE_FIELD__CURRENT_SHARE = 2 << 7;
static const long LINKEDIN_PROFILE_FIELD__NUM_CONNECTIONS = 2 << 8;
static const long LINKEDIN_PROFILE_FIELD__SUMMARY = 2 << 9;
static const long LINKEDIN_PROFILE_FIELD__POSITIONS = 2 << 10;
static const long LINKEDIN_PROFILE_FIELD__PICTURE_URL = 2 << 11;
static const long LINKEDIN_PROFILE_FIELD__EMAIL_ADDRESS = 2 << 12;
static const long LINKEDIN_PROFILE_FIELD__EDUCATIONS = 2 << 13;
static const long LINKEDIN_PROFILE_FIELD__LAST_MODIFIED_TIMESTAMP = 2 << 14;
static const long LINKEDIN_PROFILE_FIELD__PHONE = 2 << 15;

static const long LINKEDIN_PROFILE_FIELDS__ALL =
LINKEDIN_PROFILE_FIELD__ID |
LINKEDIN_PROFILE_FIELD__FIRST_NAME |
LINKEDIN_PROFILE_FIELD__LAST_NAME |
LINKEDIN_PROFILE_FIELD__HEADLINE |
LINKEDIN_PROFILE_FIELD__LOCATION |
LINKEDIN_PROFILE_FIELD__INDUSTRY |
LINKEDIN_PROFILE_FIELD__CURRENT_SHARE |
LINKEDIN_PROFILE_FIELD__NUM_CONNECTIONS |
LINKEDIN_PROFILE_FIELD__SUMMARY |
LINKEDIN_PROFILE_FIELD__POSITIONS |
LINKEDIN_PROFILE_FIELD__PICTURE_URL |
LINKEDIN_PROFILE_FIELD__EMAIL_ADDRESS |
LINKEDIN_PROFILE_FIELD__EDUCATIONS |
LINKEDIN_PROFILE_FIELD__LAST_MODIFIED_TIMESTAMP |
LINKEDIN_PROFILE_FIELD__PHONE;

#endif
