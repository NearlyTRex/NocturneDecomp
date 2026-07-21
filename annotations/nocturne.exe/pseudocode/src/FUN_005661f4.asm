; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005661f4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   crt_memory.c___vec_new_FUN_00566234 at 00566244
;
; Called Functions:
;   FUN_005661c2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005661f4
        ;   Label: FUN_005661f4
    TEST EAX,EAX                        ; 005661f8
    JNZ 0x005661fd                      ; 005661fa
        ;   XREF to: 005661fd (CONDITIONAL_JUMP)  ; LAB_005661fd
    RET                                 ; 005661fc
    MOV EDX,dword ptr [ESP + 0x8]       ; 005661fd
        ;   Label: LAB_005661fd
    MOV dword ptr [EAX],EDX             ; 00566201
    MOV EDX,dword ptr [ESP + 0xc]       ; 00566203
    PUSH EDX                            ; 00566207
    MOV ECX,dword ptr [ESP + 0xc]       ; 00566208
    PUSH ECX                            ; 0056620c
    ADD EAX,0x4                         ; 0056620d
    PUSH EAX                            ; 00566210
    CALL FUN_005661c2                   ; 00566211
        ;   XREF to: 005661c2 (UNCONDITIONAL_CALL)  ; undefined FUN_005661c2()
    ADD ESP,0xc                         ; 00566216
    RET                                 ; 00566219

