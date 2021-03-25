//
// Copyright (c) 2013-2016 Apple Inc. All rights reserved.
//
// Copyright (c) 1997-2005, Sen:te (Sente SA).  All rights reserved.
//
// Use of this source code is governed by the following license:
// 
// Redistribution and use in source and binary forms, with or without modification, 
// are permitted provided that the following conditions are met:
// 
// (1) Redistributions of source code must retain the above copyright notice, 
// this list of conditions and the following disclaimer.
// 
// (2) Redistributions in binary form must reproduce the above copyright notice, 
// this list of conditions and the following disclaimer in the documentation 
// and/or other materials provided with the distribution.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS ``AS IS'' 
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
// IN NO EVENT SHALL Sente SA OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT 
// OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) 
// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, 
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, 
// EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// 
// Note: this license is equivalent to the FreeBSD license.
// 
// This notice may not be removed from this file.

#import "XCTestDefines.h"
#import "XCTestErrors.h"

#import "XCAbstractTest.h"
#import "XCTestAssertions.h"
#import "XCTestAssertionsImpl.h"
#import "XCTestCase.h"
#import "XCTestCase+AsynchronousTesting.h"
#import "XCTestCase+XCUIInterruptionMonitoring.h"
#import "XCTestCaseRun.h"
#import "XCTestExpectation.h"
#import "XCTestLog.h"
#import "XCTestObserver.h"
#import "XCTestObservationCenter.h"
#import "XCTestObservation.h"
#import "XCTestProbe.h"
#import "XCTestRun.h"
#import "XCTestSkipping.h"
#import "XCTestSkippingImpl.h"
#import "XCTestSuite.h"
#import "XCTestSuiteRun.h"

#import "XCTActivity.h"
#import "XCTAttachment.h"
#import "XCTContext.h"
#import "XCTDarwinNotificationExpectation.h"
#import "XCTIssue.h"
#import "XCTKVOExpectation.h"
#import "XCTMeasureOptions.h"
#import "XCTMetric.h"
#import "XCTNSNotificationExpectation.h"
#import "XCTNSPredicateExpectation.h"
#import "XCTSourceCodeContext.h"
#import "XCTWaiter.h"

#import "XCUIApplication.h"
#import "XCUIDevice.h"
#import "XCUICoordinate.h"
#import "XCUIElement.h"
#import "XCUIElementQuery.h"
#import "XCUIElementTypes.h"
#import "XCUIElementAttributes.h"
#import "XCUIElementTypeQueryProvider.h"
#import "XCUIKeyboardKeys.h"
#import "XCUIProtectedResource.h"
#import "XCUIRemote.h"
#import "XCUIScreen.h"
#import "XCUIScreenshot.h"
#import "XCUIScreenshotProviding.h"
#import "XCUISiriService.h"
