
"use strict";

let TestNestedService = require('./TestNestedService.js')
let TestMultipleRequestFields = require('./TestMultipleRequestFields.js')
let TestRequestOnly = require('./TestRequestOnly.js')
let TestRequestAndResponse = require('./TestRequestAndResponse.js')
let TestEmpty = require('./TestEmpty.js')
let TestMultipleResponseFields = require('./TestMultipleResponseFields.js')
let SendBytes = require('./SendBytes.js')
let AddTwoInts = require('./AddTwoInts.js')
let TestResponseOnly = require('./TestResponseOnly.js')
let TestArrayRequest = require('./TestArrayRequest.js')

module.exports = {
  TestNestedService: TestNestedService,
  TestMultipleRequestFields: TestMultipleRequestFields,
  TestRequestOnly: TestRequestOnly,
  TestRequestAndResponse: TestRequestAndResponse,
  TestEmpty: TestEmpty,
  TestMultipleResponseFields: TestMultipleResponseFields,
  SendBytes: SendBytes,
  AddTwoInts: AddTwoInts,
  TestResponseOnly: TestResponseOnly,
  TestArrayRequest: TestArrayRequest,
};
