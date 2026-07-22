; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00467890(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_load_FUN_00506f10 at 00507824
;
; Referenced Globals:
;   TerminatedCString s_rb_0057e1d2
;   TerminatedCString s_data_0057e1d5
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_00563380
;   engine_dosio.cpp_getFile_FUN_00456a60
;   FUN_004676c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467890
        ;   Label: FUN_00467890
    PUSH 0x57e1d2                       ; 00467891 | = "rb"
    MOV EDX,dword ptr [ESP + 0x10]      ; 00467896
    PUSH EDX                            ; 0046789a
    PUSH 0x57e1d5                       ; 0046789b | = "data"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004678a0
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    MOV EBX,EAX                         ; 004678a5
    ADD ESP,0xc                         ; 004678a7
    TEST EAX,EAX                        ; 004678aa
    JNZ 0x004678b0                      ; 004678ac
        ;   XREF to: 004678b0 (CONDITIONAL_JUMP)  ; LAB_004678b0
    POP EBX                             ; 004678ae
    RET                                 ; 004678af
    PUSH EAX                            ; 004678b0
        ;   Label: LAB_004678b0
    MOV ECX,dword ptr [ESP + 0xc]       ; 004678b1
    PUSH ECX                            ; 004678b5
    CALL FUN_004676c0                   ; 004678b6
        ;   XREF to: 004676c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004676c0()
    ADD ESP,0x8                         ; 004678bb
    PUSH EBX                            ; 004678be
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004678bf
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    MOV EAX,0x1                         ; 004678c4
    ADD ESP,0x4                         ; 004678c9
    POP EBX                             ; 004678cc
    RET                                 ; 004678cd

