#!/usr/bin/env python
"""
See README.md
"""

from unittest import TestCase


class SimplePythonTest(TestCase):

    def test_simple_python(self):
        self.fail()

if __name__ == '__main__':
    import rostest
    rostest.rosrun("tooro_dummy", 'test_simple', SimplePythonTest)
