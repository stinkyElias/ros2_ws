from setuptools import find_packages
from setuptools import setup

setup(
    name='tutorials_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('tutorials_interfaces', 'tutorials_interfaces.*')),
)
