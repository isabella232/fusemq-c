/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _CMS_BYTESMESSAGETEST_H_
#define _CMS_BYTESMESSAGETEST_H_

#include "SingleConnectionTestCase.h"

namespace cms {

	class BytesMessageTest : public SingleConnectionTestCase {

        CPPUNIT_TEST_SUITE( BytesMessageTest );
        CPPUNIT_TEST( testCreateBytesMessage );
        CPPUNIT_TEST_SUITE_END();

	public:

        BytesMessageTest();
		virtual ~BytesMessageTest();

		void testCreateBytesMessage();

	};

}

#endif /* _CMS_BYTESMESSAGETEST_H_ */
