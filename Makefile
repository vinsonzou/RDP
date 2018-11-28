all: 3rd_party comm tools syncer

3rd_party:
	cd build && ./build.sh 3rd_party

comm:
	cd build && ./build.sh comm

tools:
	cd build && ./build.sh topic_translate
	cd build && ./build.sh fulltopic_check
	cd build && ./build.sh zk

syncer:
	cd build && ./build.sh syncer

install:
	cd build && ./build.sh syncer_install

.PHONY: all
.PHONY: 3rd_party
.PHONY: comm
.PHONY: tools
.PHONY: syncer
.PHONY: install


