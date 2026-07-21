; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00530e60(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_02dc9d60
;   undefined4 DAT_02dc9d74
;   undefined4 DAT_02dc9d78
;   undefined4 DAT_02dc9d7c
;   undefined4 DAT_02dc9d80
;   undefined4 DAT_02dc9d84
;   undefined4 DAT_02dc9d88
;   undefined4 DAT_02dc9d8c
;   undefined4 DAT_02dc9d90
;   undefined4 DAT_02dc9d94
;   undefined4 DAT_02dc9d98
;   undefined4 DAT_02dc9d9c
;   undefined4 DAT_02dc9da0
;   ... and 26 more
;
; Called Functions:
;   FUN_004c8440
;   FUN_00530d40
;   FUN_00553d30
;   wincore_wddvmem.cpp_getProcAddress_FUN_00553d40
;   wincore_windll.cpp_CExternalRenderer_ctor_FUN_00532da0
;   wincore_windll.cpp_CExternalRenderer_validate_FUN_00532df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530e60
        ;   Label: FUN_00530e60
    PUSH EBP                            ; 00530e61
    SUB ESP,0x3b90                      ; 00530e62
    PUSH 0x5c0e80                       ; 00530e68
    CALL FUN_00553d30                   ; 00530e6d
        ;   XREF to: 00553d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00553d30()
    ADD ESP,0x4                         ; 00530e72
    MOV [0x02dc9e08],EAX                ; 00530e75 | DAT_02dc9e08
    TEST EAX,EAX                        ; 00530e7a
    JNZ 0x00530e8c                      ; 00530e7c
        ;   XREF to: 00530e8c (CONDITIONAL_JUMP)  ; LAB_00530e8c
    MOV [0x02dc9d60],EAX                ; 00530e7e | DAT_02dc9d60
    ADD ESP,0x3b90                      ; 00530e83
    POP EBP                             ; 00530e89
    POP EBX                             ; 00530e8a
    RET                                 ; 00530e8b
    PUSH 0x594d54                       ; 00530e8c
        ;   Label: LAB_00530e8c
    PUSH EAX                            ; 00530e91
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00530e92
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 00530e97
    MOV EDX,EAX                         ; 00530e9a
    TEST EAX,EAX                        ; 00530e9c
    JZ 0x00531750                       ; 00530e9e
        ;   XREF to: 00531750 (CONDITIONAL_JUMP)  ; LAB_00531750
    MOV EAX,ESP                         ; 00530ea4
    PUSH EAX                            ; 00530ea6
    MOV ECX,dword ptr [0x02dc9e08]      ; 00530ea7 | DAT_02dc9e08
    PUSH ECX                            ; 00530ead
    CALL EDX                            ; 00530eae
    ADD ESP,0x8                         ; 00530eb0
    LEA EAX,[ESP + 0x1dc8]              ; 00530eb3
    PUSH EAX                            ; 00530eba
    CALL wincore_windll.cpp_CExternalRenderer_ctor_FUN_00532da0 ; 00530ebb
        ;   XREF to: 00532da0 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_CExternalRenderer_ctor_FUN_00532da0()
    ADD ESP,0x4                         ; 00530ec0
    LEA EAX,[ESP + 0x1dc8]              ; 00530ec3
    PUSH EAX                            ; 00530eca
    LEA EAX,[ESP + 0x4]                 ; 00530ecb
    PUSH EAX                            ; 00530ecf
    CALL wincore_windll.cpp_CExternalRenderer_validate_FUN_00532df0 ; 00530ed0
        ;   XREF to: 00532df0 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_CExternalRenderer_validate_FUN_00532df0()
    ADD ESP,0x8                         ; 00530ed5
    TEST EAX,EAX                        ; 00530ed8
    JZ 0x00531765                       ; 00530eda
        ;   XREF to: 00531765 (CONDITIONAL_JUMP)  ; LAB_00531765
    PUSH EDI                            ; 00530ee0
    PUSH ESI                            ; 00530ee1
    PUSH 0x594d66                       ; 00530ee2
    MOV ESI,dword ptr [0x02dc9e08]      ; 00530ee7 | DAT_02dc9e08
    PUSH ESI                            ; 00530eed
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00530eee
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 00530ef3
    MOV [0x02dc9d74],EAX                ; 00530ef6 | DAT_02dc9d74
    TEST EAX,EAX                        ; 00530efb
    JNZ 0x00530f22                      ; 00530efd
        ;   XREF to: 00530f22 (CONDITIONAL_JUMP)  ; LAB_00530f22
    MOV EDI,0x594d27                    ; 00530eff
    MOV EBP,0x86                        ; 00530f04
    PUSH 0x594d3b                       ; 00530f09
    MOV dword ptr [0x01cc4800],EDI      ; 00530f0e | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 00530f14 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00530f1a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00530f1f
    PUSH 0x594d71                       ; 00530f22
        ;   Label: LAB_00530f22
    MOV EAX,[0x02dc9e08]                ; 00530f27 | DAT_02dc9e08
    PUSH EAX                            ; 00530f2c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00530f2d
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 00530f32
    MOV [0x02dc9d78],EAX                ; 00530f35 | DAT_02dc9d78
    TEST EAX,EAX                        ; 00530f3a
    JNZ 0x00530f61                      ; 00530f3c
        ;   XREF to: 00530f61 (CONDITIONAL_JUMP)  ; LAB_00530f61
    MOV EDX,0x594d27                    ; 00530f3e
    MOV ECX,0x86                        ; 00530f43
    PUSH 0x594d3b                       ; 00530f48
    MOV dword ptr [0x01cc4800],EDX      ; 00530f4d | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00530f53 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00530f59
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00530f5e
    PUSH 0x594d7c                       ; 00530f61
        ;   Label: LAB_00530f61
    MOV EBX,dword ptr [0x02dc9e08]      ; 00530f66 | DAT_02dc9e08
    PUSH EBX                            ; 00530f6c
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00530f6d
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 00530f72
    MOV [0x02dc9d7c],EAX                ; 00530f75 | DAT_02dc9d7c
    TEST EAX,EAX                        ; 00530f7a
    JNZ 0x00530fa1                      ; 00530f7c
        ;   XREF to: 00530fa1 (CONDITIONAL_JUMP)  ; LAB_00530fa1
    MOV ESI,0x594d27                    ; 00530f7e
    MOV EDI,0x86                        ; 00530f83
    PUSH 0x594d3b                       ; 00530f88
    MOV dword ptr [0x01cc4800],ESI      ; 00530f8d | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00530f93 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00530f99
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00530f9e
    PUSH 0x594d89                       ; 00530fa1
        ;   Label: LAB_00530fa1
    MOV EBP,dword ptr [0x02dc9e08]      ; 00530fa6 | DAT_02dc9e08
    PUSH EBP                            ; 00530fac
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00530fad
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 00530fb2
    MOV [0x02dc9d80],EAX                ; 00530fb5 | DAT_02dc9d80
    TEST EAX,EAX                        ; 00530fba
    JNZ 0x00530fe0                      ; 00530fbc
        ;   XREF to: 00530fe0 (CONDITIONAL_JUMP)  ; LAB_00530fe0
    MOV EAX,0x594d27                    ; 00530fbe
    MOV EDX,0x86                        ; 00530fc3
    PUSH 0x594d3b                       ; 00530fc8
    MOV [0x01cc4800],EAX                ; 00530fcd | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00530fd2 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00530fd8
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00530fdd
    PUSH 0x594d9c                       ; 00530fe0
        ;   Label: LAB_00530fe0
    MOV ECX,dword ptr [0x02dc9e08]      ; 00530fe5 | DAT_02dc9e08
    PUSH ECX                            ; 00530feb
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00530fec
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 00530ff1
    MOV [0x02dc9d84],EAX                ; 00530ff4 | DAT_02dc9d84
    TEST EAX,EAX                        ; 00530ff9
    JNZ 0x00531020                      ; 00530ffb
        ;   XREF to: 00531020 (CONDITIONAL_JUMP)  ; LAB_00531020
    MOV EBX,0x594d27                    ; 00530ffd
    MOV ESI,0x86                        ; 00531002
    PUSH 0x594d3b                       ; 00531007
    MOV dword ptr [0x01cc4800],EBX      ; 0053100c | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00531012 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00531018
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0053101d
    PUSH 0x594db0                       ; 00531020
        ;   Label: LAB_00531020
    MOV EDI,dword ptr [0x02dc9e08]      ; 00531025 | DAT_02dc9e08
    PUSH EDI                            ; 0053102b
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 0053102c
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 00531031
    MOV [0x02dc9d88],EAX                ; 00531034 | DAT_02dc9d88
    TEST EAX,EAX                        ; 00531039
    JNZ 0x0053105f                      ; 0053103b
        ;   XREF to: 0053105f (CONDITIONAL_JUMP)  ; LAB_0053105f
    MOV EBP,0x594d27                    ; 0053103d
    MOV EAX,0x86                        ; 00531042
    PUSH 0x594d3b                       ; 00531047
    MOV dword ptr [0x01cc4800],EBP      ; 0053104c | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 00531052 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00531057
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0053105c
    PUSH 0x594dc7                       ; 0053105f
        ;   Label: LAB_0053105f
    MOV EDX,dword ptr [0x02dc9e08]      ; 00531064 | DAT_02dc9e08
    PUSH EDX                            ; 0053106a
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 0053106b
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 00531070
    MOV [0x02dc9d8c],EAX                ; 00531073 | DAT_02dc9d8c
    TEST EAX,EAX                        ; 00531078
    JNZ 0x0053109f                      ; 0053107a
        ;   XREF to: 0053109f (CONDITIONAL_JUMP)  ; LAB_0053109f
    MOV ECX,0x594d27                    ; 0053107c
    MOV EBX,0x86                        ; 00531081
    PUSH 0x594d3b                       ; 00531086
    MOV dword ptr [0x01cc4800],ECX      ; 0053108b | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 00531091 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00531097
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0053109c
    PUSH 0x594dd8                       ; 0053109f
        ;   Label: LAB_0053109f
    MOV ESI,dword ptr [0x02dc9e08]      ; 005310a4 | DAT_02dc9e08
    PUSH ESI                            ; 005310aa
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 005310ab
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 005310b0
    MOV [0x02dc9d90],EAX                ; 005310b3 | DAT_02dc9d90
    TEST EAX,EAX                        ; 005310b8
    JNZ 0x005310df                      ; 005310ba
        ;   XREF to: 005310df (CONDITIONAL_JUMP)  ; LAB_005310df
    MOV EDI,0x594d27                    ; 005310bc
    MOV EBP,0x86                        ; 005310c1
    PUSH 0x594d3b                       ; 005310c6
    MOV dword ptr [0x01cc4800],EDI      ; 005310cb | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 005310d1 | DAT_01cc4804
    CALL FUN_004c8440                   ; 005310d7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005310dc
    PUSH 0x594de7                       ; 005310df
        ;   Label: LAB_005310df
    MOV EAX,[0x02dc9e08]                ; 005310e4 | DAT_02dc9e08
    PUSH EAX                            ; 005310e9
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 005310ea
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 005310ef
    MOV [0x02dc9d94],EAX                ; 005310f2 | DAT_02dc9d94
    TEST EAX,EAX                        ; 005310f7
    JNZ 0x0053111e                      ; 005310f9
        ;   XREF to: 0053111e (CONDITIONAL_JUMP)  ; LAB_0053111e
    MOV EDX,0x594d27                    ; 005310fb
    MOV ECX,0x86                        ; 00531100
    PUSH 0x594d3b                       ; 00531105
    MOV dword ptr [0x01cc4800],EDX      ; 0053110a | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00531110 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00531116
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0053111b
    PUSH 0x594df7                       ; 0053111e
        ;   Label: LAB_0053111e
    MOV EBX,dword ptr [0x02dc9e08]      ; 00531123 | DAT_02dc9e08
    PUSH EBX                            ; 00531129
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 0053112a
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 0053112f
    MOV [0x02dc9d98],EAX                ; 00531132 | DAT_02dc9d98
    TEST EAX,EAX                        ; 00531137
    JNZ 0x0053115e                      ; 00531139
        ;   XREF to: 0053115e (CONDITIONAL_JUMP)  ; LAB_0053115e
    MOV ESI,0x594d27                    ; 0053113b
    MOV EDI,0x86                        ; 00531140
    PUSH 0x594d3b                       ; 00531145
    MOV dword ptr [0x01cc4800],ESI      ; 0053114a | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00531150 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00531156
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0053115b
    PUSH 0x594e09                       ; 0053115e
        ;   Label: LAB_0053115e
    MOV EBP,dword ptr [0x02dc9e08]      ; 00531163 | DAT_02dc9e08
    PUSH EBP                            ; 00531169
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 0053116a
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 0053116f
    MOV [0x02dc9d9c],EAX                ; 00531172 | DAT_02dc9d9c
    TEST EAX,EAX                        ; 00531177
    JNZ 0x0053119d                      ; 00531179
        ;   XREF to: 0053119d (CONDITIONAL_JUMP)  ; LAB_0053119d
    MOV EAX,0x594d27                    ; 0053117b
    MOV EDX,0x86                        ; 00531180
    PUSH 0x594d3b                       ; 00531185
    MOV [0x01cc4800],EAX                ; 0053118a | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0053118f | DAT_01cc4804
    CALL FUN_004c8440                   ; 00531195
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0053119a
    PUSH 0x594e1d                       ; 0053119d
        ;   Label: LAB_0053119d
    MOV ECX,dword ptr [0x02dc9e08]      ; 005311a2 | DAT_02dc9e08
    PUSH ECX                            ; 005311a8
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 005311a9
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 005311ae
    MOV [0x02dc9da0],EAX                ; 005311b1 | DAT_02dc9da0
    TEST EAX,EAX                        ; 005311b6
    JNZ 0x005311dd                      ; 005311b8
        ;   XREF to: 005311dd (CONDITIONAL_JUMP)  ; LAB_005311dd
    MOV EBX,0x594d27                    ; 005311ba
    MOV ESI,0x86                        ; 005311bf
    PUSH 0x594d3b                       ; 005311c4
    MOV dword ptr [0x01cc4800],EBX      ; 005311c9 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 005311cf | DAT_01cc4804
    CALL FUN_004c8440                   ; 005311d5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005311da
    PUSH 0x594e31                       ; 005311dd
        ;   Label: LAB_005311dd
    MOV EDI,dword ptr [0x02dc9e08]      ; 005311e2 | DAT_02dc9e08
    PUSH EDI                            ; 005311e8
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 005311e9
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 005311ee
    MOV [0x02dc9da4],EAX                ; 005311f1 | DAT_02dc9da4
    TEST EAX,EAX                        ; 005311f6
    JNZ 0x0053121c                      ; 005311f8
        ;   XREF to: 0053121c (CONDITIONAL_JUMP)  ; LAB_0053121c
    MOV EBP,0x594d27                    ; 005311fa
    MOV EAX,0x86                        ; 005311ff
    PUSH 0x594d3b                       ; 00531204
    MOV dword ptr [0x01cc4800],EBP      ; 00531209 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 0053120f | DAT_01cc4804
    CALL FUN_004c8440                   ; 00531214
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00531219
    PUSH 0x594e46                       ; 0053121c
        ;   Label: LAB_0053121c
    MOV EDX,dword ptr [0x02dc9e08]      ; 00531221 | DAT_02dc9e08
    PUSH EDX                            ; 00531227
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531228
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 0053122d
    MOV [0x02dc9da8],EAX                ; 00531230 | DAT_02dc9da8
    TEST EAX,EAX                        ; 00531235
    JNZ 0x0053125c                      ; 00531237
        ;   XREF to: 0053125c (CONDITIONAL_JUMP)  ; LAB_0053125c
    MOV ECX,0x594d27                    ; 00531239
    MOV EBX,0x86                        ; 0053123e
    PUSH 0x594d3b                       ; 00531243
    MOV dword ptr [0x01cc4800],ECX      ; 00531248 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0053124e | DAT_01cc4804
    CALL FUN_004c8440                   ; 00531254
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00531259
    PUSH 0x594e58                       ; 0053125c
        ;   Label: LAB_0053125c
    MOV ESI,dword ptr [0x02dc9e08]      ; 00531261 | DAT_02dc9e08
    PUSH ESI                            ; 00531267
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531268
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 0053126d
    MOV [0x02dc9dac],EAX                ; 00531270 | DAT_02dc9dac
    TEST EAX,EAX                        ; 00531275
    JNZ 0x0053129c                      ; 00531277
        ;   XREF to: 0053129c (CONDITIONAL_JUMP)  ; LAB_0053129c
    MOV EDI,0x594d27                    ; 00531279
    MOV EBP,0x86                        ; 0053127e
    PUSH 0x594d3b                       ; 00531283
    MOV dword ptr [0x01cc4800],EDI      ; 00531288 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 0053128e | DAT_01cc4804
    CALL FUN_004c8440                   ; 00531294
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00531299
    PUSH 0x594e6b                       ; 0053129c
        ;   Label: LAB_0053129c
    MOV EAX,[0x02dc9e08]                ; 005312a1 | DAT_02dc9e08
    PUSH EAX                            ; 005312a6
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 005312a7
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 005312ac
    PUSH 0x594e7e                       ; 005312af
    MOV EDX,dword ptr [0x02dc9e08]      ; 005312b4 | DAT_02dc9e08
    PUSH EDX                            ; 005312ba
    MOV [0x02dc9db0],EAX                ; 005312bb | DAT_02dc9db0
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 005312c0
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 005312c5
    PUSH 0x594e92                       ; 005312c8
    MOV ECX,dword ptr [0x02dc9e08]      ; 005312cd | DAT_02dc9e08
    PUSH ECX                            ; 005312d3
    MOV [0x02dc9db4],EAX                ; 005312d4 | DAT_02dc9db4
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 005312d9
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 005312de
    MOV [0x02dc9db8],EAX                ; 005312e1 | DAT_02dc9db8
    TEST EAX,EAX                        ; 005312e6
    JNZ 0x0053130d                      ; 005312e8
        ;   XREF to: 0053130d (CONDITIONAL_JUMP)  ; LAB_0053130d
    MOV EBX,0x594d27                    ; 005312ea
    MOV ESI,0x86                        ; 005312ef
    PUSH 0x594d3b                       ; 005312f4
    MOV dword ptr [0x01cc4800],EBX      ; 005312f9 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 005312ff | DAT_01cc4804
    CALL FUN_004c8440                   ; 00531305
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0053130a
    PUSH 0x594ea4                       ; 0053130d
        ;   Label: LAB_0053130d
    MOV EDI,dword ptr [0x02dc9e08]      ; 00531312 | DAT_02dc9e08
    PUSH EDI                            ; 00531318
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531319
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 0053131e
    MOV [0x02dc9dbc],EAX                ; 00531321 | DAT_02dc9dbc
    TEST EAX,EAX                        ; 00531326
    JNZ 0x0053134c                      ; 00531328
        ;   XREF to: 0053134c (CONDITIONAL_JUMP)  ; LAB_0053134c
    MOV EBP,0x594d27                    ; 0053132a
    MOV EAX,0x86                        ; 0053132f
    PUSH 0x594d3b                       ; 00531334
    MOV dword ptr [0x01cc4800],EBP      ; 00531339 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 0053133f | DAT_01cc4804
    CALL FUN_004c8440                   ; 00531344
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00531349
    PUSH 0x594ebc                       ; 0053134c
        ;   Label: LAB_0053134c
    MOV EDX,dword ptr [0x02dc9e08]      ; 00531351 | DAT_02dc9e08
    PUSH EDX                            ; 00531357
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531358
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 0053135d
    MOV [0x02dc9dc0],EAX                ; 00531360 | DAT_02dc9dc0
    TEST EAX,EAX                        ; 00531365
    JNZ 0x0053138c                      ; 00531367
        ;   XREF to: 0053138c (CONDITIONAL_JUMP)  ; LAB_0053138c
    MOV ECX,0x594d27                    ; 00531369
    MOV EBX,0x86                        ; 0053136e
    PUSH 0x594d3b                       ; 00531373
    MOV dword ptr [0x01cc4800],ECX      ; 00531378 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0053137e | DAT_01cc4804
    CALL FUN_004c8440                   ; 00531384
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00531389
    PUSH 0x594ecc                       ; 0053138c
        ;   Label: LAB_0053138c
    MOV ESI,dword ptr [0x02dc9e08]      ; 00531391 | DAT_02dc9e08
    PUSH ESI                            ; 00531397
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531398
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 0053139d
    MOV [0x02dc9dc4],EAX                ; 005313a0 | DAT_02dc9dc4
    TEST EAX,EAX                        ; 005313a5
    JNZ 0x005313cc                      ; 005313a7
        ;   XREF to: 005313cc (CONDITIONAL_JUMP)  ; LAB_005313cc
    MOV EDI,0x594d27                    ; 005313a9
    MOV EBP,0x86                        ; 005313ae
    PUSH 0x594d3b                       ; 005313b3
    MOV dword ptr [0x01cc4800],EDI      ; 005313b8 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 005313be | DAT_01cc4804
    CALL FUN_004c8440                   ; 005313c4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005313c9
    PUSH 0x594ee0                       ; 005313cc
        ;   Label: LAB_005313cc
    MOV EAX,[0x02dc9e08]                ; 005313d1 | DAT_02dc9e08
    PUSH EAX                            ; 005313d6
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 005313d7
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 005313dc
    MOV [0x02dc9dc8],EAX                ; 005313df | DAT_02dc9dc8
    TEST EAX,EAX                        ; 005313e4
    JNZ 0x0053140b                      ; 005313e6
        ;   XREF to: 0053140b (CONDITIONAL_JUMP)  ; LAB_0053140b
    MOV EDX,0x594d27                    ; 005313e8
    MOV ECX,0x86                        ; 005313ed
    PUSH 0x594d3b                       ; 005313f2
    MOV dword ptr [0x01cc4800],EDX      ; 005313f7 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 005313fd | DAT_01cc4804
    CALL FUN_004c8440                   ; 00531403
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00531408
    PUSH 0x594eec                       ; 0053140b
        ;   Label: LAB_0053140b
    MOV EBX,dword ptr [0x02dc9e08]      ; 00531410 | DAT_02dc9e08
    PUSH EBX                            ; 00531416
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531417
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 0053141c
    MOV [0x02dc9dcc],EAX                ; 0053141f | DAT_02dc9dcc
    TEST EAX,EAX                        ; 00531424
    JNZ 0x0053144b                      ; 00531426
        ;   XREF to: 0053144b (CONDITIONAL_JUMP)  ; LAB_0053144b
    MOV ESI,0x594d27                    ; 00531428
    MOV EDI,0x86                        ; 0053142d
    PUSH 0x594d3b                       ; 00531432
    MOV dword ptr [0x01cc4800],ESI      ; 00531437 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 0053143d | DAT_01cc4804
    CALL FUN_004c8440                   ; 00531443
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00531448
    PUSH 0x594efe                       ; 0053144b
        ;   Label: LAB_0053144b
    MOV EBP,dword ptr [0x02dc9e08]      ; 00531450 | DAT_02dc9e08
    PUSH EBP                            ; 00531456
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531457
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 0053145c
    MOV [0x02dc9dd0],EAX                ; 0053145f | DAT_02dc9dd0
    TEST EAX,EAX                        ; 00531464
    JNZ 0x0053148a                      ; 00531466
        ;   XREF to: 0053148a (CONDITIONAL_JUMP)  ; LAB_0053148a
    MOV EAX,0x594d27                    ; 00531468
    MOV EDX,0x86                        ; 0053146d
    PUSH 0x594d3b                       ; 00531472
    MOV [0x01cc4800],EAX                ; 00531477 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0053147c | DAT_01cc4804
    CALL FUN_004c8440                   ; 00531482
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00531487
    PUSH 0x594f09                       ; 0053148a
        ;   Label: LAB_0053148a
    MOV ECX,dword ptr [0x02dc9e08]      ; 0053148f | DAT_02dc9e08
    PUSH ECX                            ; 00531495
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531496
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 0053149b
    MOV [0x02dc9dd4],EAX                ; 0053149e | DAT_02dc9dd4
    TEST EAX,EAX                        ; 005314a3
    JNZ 0x005314ca                      ; 005314a5
        ;   XREF to: 005314ca (CONDITIONAL_JUMP)  ; LAB_005314ca
    MOV EBX,0x594d27                    ; 005314a7
    MOV ESI,0x86                        ; 005314ac
    PUSH 0x594d3b                       ; 005314b1
    MOV dword ptr [0x01cc4800],EBX      ; 005314b6 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 005314bc | DAT_01cc4804
    CALL FUN_004c8440                   ; 005314c2
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005314c7
    PUSH 0x594f1c                       ; 005314ca
        ;   Label: LAB_005314ca
    MOV EDI,dword ptr [0x02dc9e08]      ; 005314cf | DAT_02dc9e08
    PUSH EDI                            ; 005314d5
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 005314d6
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 005314db
    MOV [0x02dc9dd8],EAX                ; 005314de | DAT_02dc9dd8
    TEST EAX,EAX                        ; 005314e3
    JNZ 0x00531509                      ; 005314e5
        ;   XREF to: 00531509 (CONDITIONAL_JUMP)  ; LAB_00531509
    MOV EBP,0x594d27                    ; 005314e7
    MOV EAX,0x86                        ; 005314ec
    PUSH 0x594d3b                       ; 005314f1
    MOV dword ptr [0x01cc4800],EBP      ; 005314f6 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 005314fc | DAT_01cc4804
    CALL FUN_004c8440                   ; 00531501
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00531506
    PUSH 0x594f2c                       ; 00531509
        ;   Label: LAB_00531509
    MOV EDX,dword ptr [0x02dc9e08]      ; 0053150e | DAT_02dc9e08
    PUSH EDX                            ; 00531514
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531515
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 0053151a
    MOV [0x02dc9ddc],EAX                ; 0053151d | DAT_02dc9ddc
    TEST EAX,EAX                        ; 00531522
    JNZ 0x00531549                      ; 00531524
        ;   XREF to: 00531549 (CONDITIONAL_JUMP)  ; LAB_00531549
    MOV ECX,0x594d27                    ; 00531526
    MOV EBX,0x86                        ; 0053152b
    PUSH 0x594d3b                       ; 00531530
    MOV dword ptr [0x01cc4800],ECX      ; 00531535 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0053153b | DAT_01cc4804
    CALL FUN_004c8440                   ; 00531541
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00531546
    PUSH 0x594f42                       ; 00531549
        ;   Label: LAB_00531549
    MOV ESI,dword ptr [0x02dc9e08]      ; 0053154e | DAT_02dc9e08
    PUSH ESI                            ; 00531554
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531555
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 0053155a
    MOV [0x02dc9de0],EAX                ; 0053155d | DAT_02dc9de0
    TEST EAX,EAX                        ; 00531562
    JNZ 0x00531589                      ; 00531564
        ;   XREF to: 00531589 (CONDITIONAL_JUMP)  ; LAB_00531589
    MOV EDI,0x594d27                    ; 00531566
    MOV EBP,0x86                        ; 0053156b
    PUSH 0x594d3b                       ; 00531570
    MOV dword ptr [0x01cc4800],EDI      ; 00531575 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 0053157b | DAT_01cc4804
    CALL FUN_004c8440                   ; 00531581
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00531586
    PUSH 0x594f5a                       ; 00531589
        ;   Label: LAB_00531589
    MOV EAX,[0x02dc9e08]                ; 0053158e | DAT_02dc9e08
    PUSH EAX                            ; 00531593
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531594
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 00531599
    MOV [0x02dc9de4],EAX                ; 0053159c | DAT_02dc9de4
    TEST EAX,EAX                        ; 005315a1
    JNZ 0x005315c8                      ; 005315a3
        ;   XREF to: 005315c8 (CONDITIONAL_JUMP)  ; LAB_005315c8
    MOV EDX,0x594d27                    ; 005315a5
    MOV ECX,0x86                        ; 005315aa
    PUSH 0x594d3b                       ; 005315af
    MOV dword ptr [0x01cc4800],EDX      ; 005315b4 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 005315ba | DAT_01cc4804
    CALL FUN_004c8440                   ; 005315c0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005315c5
    PUSH 0x594f76                       ; 005315c8
        ;   Label: LAB_005315c8
    MOV EBX,dword ptr [0x02dc9e08]      ; 005315cd | DAT_02dc9e08
    PUSH EBX                            ; 005315d3
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 005315d4
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 005315d9
    MOV [0x02dc9de8],EAX                ; 005315dc | DAT_02dc9de8
    TEST EAX,EAX                        ; 005315e1
    JNZ 0x00531608                      ; 005315e3
        ;   XREF to: 00531608 (CONDITIONAL_JUMP)  ; LAB_00531608
    MOV ESI,0x594d27                    ; 005315e5
    MOV EDI,0x86                        ; 005315ea
    PUSH 0x594d3b                       ; 005315ef
    MOV dword ptr [0x01cc4800],ESI      ; 005315f4 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 005315fa | DAT_01cc4804
    CALL FUN_004c8440                   ; 00531600
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00531605
    PUSH 0x594f8a                       ; 00531608
        ;   Label: LAB_00531608
    MOV EBP,dword ptr [0x02dc9e08]      ; 0053160d | DAT_02dc9e08
    PUSH EBP                            ; 00531613
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531614
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 00531619
    MOV [0x02dc9dec],EAX                ; 0053161c | DAT_02dc9dec
    TEST EAX,EAX                        ; 00531621
    JNZ 0x00531647                      ; 00531623
        ;   XREF to: 00531647 (CONDITIONAL_JUMP)  ; LAB_00531647
    MOV EAX,0x594d27                    ; 00531625
    MOV EDX,0x86                        ; 0053162a
    PUSH 0x594d3b                       ; 0053162f
    MOV [0x01cc4800],EAX                ; 00531634 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00531639 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0053163f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00531644
    PUSH 0x594f9f                       ; 00531647
        ;   Label: LAB_00531647
    MOV ECX,dword ptr [0x02dc9e08]      ; 0053164c | DAT_02dc9e08
    PUSH ECX                            ; 00531652
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531653
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 00531658
    MOV [0x02dc9df0],EAX                ; 0053165b | DAT_02dc9df0
    TEST EAX,EAX                        ; 00531660
    JNZ 0x00531687                      ; 00531662
        ;   XREF to: 00531687 (CONDITIONAL_JUMP)  ; LAB_00531687
    MOV EBX,0x594d27                    ; 00531664
    MOV ESI,0x86                        ; 00531669
    PUSH 0x594d3b                       ; 0053166e
    MOV dword ptr [0x01cc4800],EBX      ; 00531673 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00531679 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0053167f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00531684
    PUSH 0x594fb4                       ; 00531687
        ;   Label: LAB_00531687
    MOV EDI,dword ptr [0x02dc9e08]      ; 0053168c | DAT_02dc9e08
    PUSH EDI                            ; 00531692
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531693
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 00531698
    MOV [0x02dc9df4],EAX                ; 0053169b | DAT_02dc9df4
    TEST EAX,EAX                        ; 005316a0
    JNZ 0x005316c6                      ; 005316a2
        ;   XREF to: 005316c6 (CONDITIONAL_JUMP)  ; LAB_005316c6
    MOV EBP,0x594d27                    ; 005316a4
    MOV EAX,0x86                        ; 005316a9
    PUSH 0x594d3b                       ; 005316ae
    MOV dword ptr [0x01cc4800],EBP      ; 005316b3 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 005316b9 | DAT_01cc4804
    CALL FUN_004c8440                   ; 005316be
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005316c3
    PUSH 0x594fc5                       ; 005316c6
        ;   Label: LAB_005316c6
    MOV EDX,dword ptr [0x02dc9e08]      ; 005316cb | DAT_02dc9e08
    PUSH EDX                            ; 005316d1
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 005316d2
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 005316d7
    MOV [0x02dc9df8],EAX                ; 005316da | DAT_02dc9df8
    TEST EAX,EAX                        ; 005316df
    JNZ 0x00531706                      ; 005316e1
        ;   XREF to: 00531706 (CONDITIONAL_JUMP)  ; LAB_00531706
    MOV ECX,0x594d27                    ; 005316e3
    MOV EBX,0x86                        ; 005316e8
    PUSH 0x594d3b                       ; 005316ed
    MOV dword ptr [0x01cc4800],ECX      ; 005316f2 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 005316f8 | DAT_01cc4804
    CALL FUN_004c8440                   ; 005316fe
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00531703
    PUSH 0x594fd9                       ; 00531706
        ;   Label: LAB_00531706
    MOV ESI,dword ptr [0x02dc9e08]      ; 0053170b | DAT_02dc9e08
    PUSH ESI                            ; 00531711
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531712
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 00531717
    PUSH 0x594fee                       ; 0053171a
    MOV EDI,dword ptr [0x02dc9e08]      ; 0053171f | DAT_02dc9e08
    PUSH EDI                            ; 00531725
    MOV EBP,0x1                         ; 00531726
    MOV [0x02dc9dfc],EAX                ; 0053172b | DAT_02dc9dfc
    CALL wincore_wddvmem.cpp_getProcAddress_FUN_00553d40 ; 00531730
        ;   XREF to: 00553d40 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_getProcAddress_FUN_00553d40()
    ADD ESP,0x8                         ; 00531735
    MOV [0x02dc9e00],EAX                ; 00531738 | DAT_02dc9e00
    MOV dword ptr [0x02dc9e04],EBP      ; 0053173d | DAT_02dc9e04
    MOV EAX,EBP                         ; 00531743
    POP ESI                             ; 00531745
    POP EDI                             ; 00531746
    ADD ESP,0x3b90                      ; 00531747
    POP EBP                             ; 0053174d
    POP EBX                             ; 0053174e
    RET                                 ; 0053174f
    CALL FUN_00530d40                   ; 00531750
        ;   XREF to: 00530d40 (UNCONDITIONAL_CALL)  ; undefined FUN_00530d40()
        ;   Label: LAB_00531750
    XOR EAX,EAX                         ; 00531755
    MOV [0x02dc9d60],EAX                ; 00531757 | DAT_02dc9d60
    ADD ESP,0x3b90                      ; 0053175c
    POP EBP                             ; 00531762
    POP EBX                             ; 00531763
    RET                                 ; 00531764
    CALL FUN_00530d40                   ; 00531765
        ;   XREF to: 00530d40 (UNCONDITIONAL_CALL)  ; undefined FUN_00530d40()
        ;   Label: LAB_00531765
    XOR EBX,EBX                         ; 0053176a
    XOR EAX,EAX                         ; 0053176c
    MOV dword ptr [0x02dc9d60],EBX      ; 0053176e | DAT_02dc9d60
    ADD ESP,0x3b90                      ; 00531774
    POP EBP                             ; 0053177a
    POP EBX                             ; 0053177b
    RET                                 ; 0053177c

