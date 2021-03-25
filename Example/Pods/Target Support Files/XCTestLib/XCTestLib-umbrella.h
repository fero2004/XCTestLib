#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "XCAbstractTest.h"
#import "XCTActivity.h"
#import "XCTAttachment.h"
#import "XCTAttachmentLifetime.h"
#import "XCTContext.h"
#import "XCTDarwinNotificationExpectation.h"
#import "XCTest.h"
#import "XCTestAssertions.h"
#import "XCTestAssertionsImpl.h"
#import "XCTestCase+AsynchronousTesting.h"
#import "XCTestCase+XCUIInterruptionMonitoring.h"
#import "XCTestCase.h"
#import "XCTestCaseRun.h"
#import "XCTestDefines.h"
#import "XCTestErrors.h"
#import "XCTestExpectation.h"
#import "XCTestLog.h"
#import "XCTestObservation.h"
#import "XCTestObservationCenter.h"
#import "XCTestObserver.h"
#import "XCTestProbe.h"
#import "XCTestRun.h"
#import "XCTestSkipping.h"
#import "XCTestSkippingImpl.h"
#import "XCTestSuite.h"
#import "XCTestSuiteRun.h"
#import "XCTIssue.h"
#import "XCTKVOExpectation.h"
#import "XCTMeasureOptions.h"
#import "XCTMetric.h"
#import "XCTNSNotificationExpectation.h"
#import "XCTNSPredicateExpectation.h"
#import "XCTSourceCodeContext.h"
#import "XCTWaiter.h"
#import "XCUIApplication.h"
#import "XCUICoordinate.h"
#import "XCUIDevice.h"
#import "XCUIElement.h"
#import "XCUIElementAttributes.h"
#import "XCUIElementQuery.h"
#import "XCUIElementTypeQueryProvider.h"
#import "XCUIElementTypes.h"
#import "XCUIKeyboardKeys.h"
#import "XCUIProtectedResource.h"
#import "XCUIRemote.h"
#import "XCUIScreen.h"
#import "XCUIScreenshot.h"
#import "XCUIScreenshotProviding.h"
#import "XCUISiriService.h"

FOUNDATION_EXPORT double XCTestLibVersionNumber;
FOUNDATION_EXPORT const unsigned char XCTestLibVersionString[];

