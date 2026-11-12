; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_00449f70(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052e6d9
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005cf255
;   TerminatedCString s_CDemonLight_allocMasterZ_005cf268
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_dlight.cpp_getRestoreMemory_FUN_00449ef0
;   core_main.c_FUN_004e4500
;   crt_watcom.c__memcpy_FUN_00492718
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449f70
        ;   Label: core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_00449f70
    PUSH EBP                            ; 00449f71
    MOV EBX,dword ptr [ESP + 0xc]       ; 00449f72
    CMP dword ptr [EBX + 0x164],0x0     ; 00449f76
    JNZ 0x00449fc1                      ; 00449f7d
        ;   XREF to: 00449fc1 (CONDITIONAL_JUMP)  ; LAB_00449fc1
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 00449f7f
        ;   Label: LAB_00449f7f
    IMUL EAX,dword ptr [EBX + 0x1cc4]   ; 00449f85
    PUSH EAX                            ; 00449f8c
    CALL core_dlight.cpp_getRestoreMemory_FUN_00449ef0 ; 00449f8d
        ;   XREF to: 00449ef0 (UNCONDITIONAL_CALL)  ; void * core_dlight.cpp_getRestoreMemory_FUN_00449ef0(int pixel_count)
    MOV dword ptr [EBX + 0x2f9c],EAX    ; 00449f92
    MOV EBP,dword ptr [EBX + 0x1cc4]    ; 00449f98
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 00449f9e
    IMUL EAX,EBP                        ; 00449fa4
    ADD ESP,0x4                         ; 00449fa7
    ADD EAX,EAX                         ; 00449faa
    PUSH EAX                            ; 00449fac
    MOV EDX,dword ptr [EBX + 0x2f94]    ; 00449fad
    MOV ECX,dword ptr [EBX + 0x2f9c]    ; 00449fb3
    CALL crt_watcom.c__memcpy_FUN_00492718 ; 00449fb9
        ;   XREF to: 00492718 (UNCONDITIONAL_CALL)  ; void crt_watcom.c__memcpy_FUN_00492718(void * dest, void * src, uint size)
    POP EBP                             ; 00449fbe
    POP EBX                             ; 00449fbf
    RET                                 ; 00449fc0
    PUSH ESI                            ; 00449fc1
        ;   Label: LAB_00449fc1
    MOV ECX,0x5cf255                    ; 00449fc2 | = "..\\core\\dlight.cpp"
    MOV ESI,0xce                        ; 00449fc7
    PUSH 0x5cf268                       ; 00449fcc | = "CDemonLight::allocMasterZBuffer - We ..."
    MOV dword ptr [0x01d046a0],ECX      ; 00449fd1 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00449fd7 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00449fdd
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00449fe2
    POP ESI                             ; 00449fe5
    JMP 0x00449f7f                      ; 00449fe6
        ;   XREF to: 00449f7f (UNCONDITIONAL_JUMP)  ; LAB_00449f7f

