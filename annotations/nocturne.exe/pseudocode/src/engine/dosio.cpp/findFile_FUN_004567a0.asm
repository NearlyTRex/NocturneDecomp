; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_dosio_cpp_findFile_FUN_004567a0(undefined4 param_1)
;
;
; XREF[3]:
;   engine_dosio.cpp_getFileSize_FUN_004568c0 at 004568e6
;   engine_dosio.cpp_getFileTimestamp_FUN_00456910 at 00456936
;   engine_dosio.cpp_getFile_FUN_00456a60 at 00456ad7
;
; Referenced Globals:
;   undefined4 DAT_01af4ed8
;
; Called Functions:
;   engine_dosio.cpp_findFileNormally_FUN_00456800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004567a0
        ;   Label: engine_dosio.cpp_findFile_FUN_004567a0
    PUSH ESI                            ; 004567a1
    PUSH EDI                            ; 004567a2
    PUSH EBP                            ; 004567a3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004567a4
    MOV EDX,dword ptr [0x01af4ed8]      ; 004567a8 | DAT_01af4ed8
    CMP EDX,0x1                         ; 004567ae
    JL 0x004567e0                       ; 004567b1
        ;   XREF to: 004567e0 (CONDITIONAL_JUMP)  ; LAB_004567e0
    XOR ESI,ESI                         ; 004567b3
    TEST EDX,EDX                        ; 004567b5
    JLE 0x004567d9                      ; 004567b7
        ;   XREF to: 004567d9 (CONDITIONAL_JUMP)  ; LAB_004567d9
    XOR EBX,EBX                         ; 004567b9
    MOV EAX,EBX                         ; 004567bb
        ;   Label: LAB_004567bb
    PUSH EDI                            ; 004567bd
    CALL dword ptr [EAX + 0x1af4edc]    ; 004567be
    ADD ESP,0x4                         ; 004567c4
    TEST EAX,EAX                        ; 004567c7
    JNZ 0x004567ee                      ; 004567c9
        ;   XREF to: 004567ee (CONDITIONAL_JUMP)  ; LAB_004567ee
    MOV EBP,dword ptr [0x01af4ed8]      ; 004567cb | DAT_01af4ed8
    INC ESI                             ; 004567d1
    ADD EBX,0x4                         ; 004567d2
    CMP ESI,EBP                         ; 004567d5
    JL 0x004567bb                       ; 004567d7
        ;   XREF to: 004567bb (CONDITIONAL_JUMP)  ; LAB_004567bb
    XOR EAX,EAX                         ; 004567d9
        ;   Label: LAB_004567d9
    POP EBP                             ; 004567db
    POP EDI                             ; 004567dc
    POP ESI                             ; 004567dd
    POP EBX                             ; 004567de
    RET                                 ; 004567df
    PUSH EDI                            ; 004567e0
        ;   Label: LAB_004567e0
    CALL engine_dosio.cpp_findFileNormally_FUN_00456800 ; 004567e1
        ;   XREF to: 00456800 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFileNormally_FUN_00456800()
    ADD ESP,0x4                         ; 004567e6
    POP EBP                             ; 004567e9
    POP EDI                             ; 004567ea
    POP ESI                             ; 004567eb
    POP EBX                             ; 004567ec
    RET                                 ; 004567ed
    MOV EAX,0x1                         ; 004567ee
        ;   Label: LAB_004567ee
    POP EBP                             ; 004567f3
    POP EDI                             ; 004567f4
    POP ESI                             ; 004567f5
    POP EBX                             ; 004567f6
    RET                                 ; 004567f7

