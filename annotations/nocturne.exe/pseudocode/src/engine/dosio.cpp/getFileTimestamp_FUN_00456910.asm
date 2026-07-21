; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_dosio_cpp_getFileTimestamp_FUN_00456910(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x214]:1  local_214
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_004f7ae0 at 004f7b45
;
; Called Functions:
;   engine_dosio.cpp_findFile_FUN_004567a0
;   engine_dosio.cpp_getRelativeFilePath_FUN_00456700
;
; *****************************************************************************

section .text

    SUB ESP,0x214                       ; 00456910
        ;   Label: engine_dosio.cpp_getFileTimestamp_FUN_00456910
    MOV EDX,dword ptr [ESP + 0x21c]     ; 00456916
    PUSH EDX                            ; 0045691d
    MOV ECX,dword ptr [ESP + 0x21c]     ; 0045691e
    PUSH ECX                            ; 00456925
    LEA EAX,[ESP + 0x8]                 ; 00456926
    PUSH EAX                            ; 0045692a
    CALL engine_dosio.cpp_getRelativeFilePath_FUN_00456700 ; 0045692b
        ;   XREF to: 00456700 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getRelativeFilePath_FUN_00456700()
    ADD ESP,0xc                         ; 00456930
    MOV EAX,ESP                         ; 00456933
    PUSH EAX                            ; 00456935
    CALL engine_dosio.cpp_findFile_FUN_004567a0 ; 00456936
        ;   XREF to: 004567a0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFile_FUN_004567a0()
    ADD ESP,0x4                         ; 0045693b
    TEST EAX,EAX                        ; 0045693e
    JZ 0x00456949                       ; 00456940
        ;   XREF to: 00456949 (CONDITIONAL_JUMP)  ; LAB_00456949
    MOV EAX,dword ptr [ESP + 0x20c]     ; 00456942
    ADD ESP,0x214                       ; 00456949
        ;   Label: LAB_00456949
    RET                                 ; 0045694f

