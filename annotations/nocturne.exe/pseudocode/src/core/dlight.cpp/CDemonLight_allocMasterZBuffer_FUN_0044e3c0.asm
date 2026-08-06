; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_0044e3c0(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508fb3
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_0057c5cc
;   TerminatedCString s_CDemonLight_allocMasterZ_0057c5df
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dlight.cpp_getRestoreMemory_FUN_0044e340
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_watcom.c__memcpy_FUN_00481a28
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e3c0
        ;   Label: core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_0044e3c0
    PUSH EBP                            ; 0044e3c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0044e3c2
    CMP dword ptr [EBX + 0x164],0x0     ; 0044e3c6
    JNZ 0x0044e411                      ; 0044e3cd
        ;   XREF to: 0044e411 (CONDITIONAL_JUMP)  ; LAB_0044e411
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0044e3cf
        ;   Label: LAB_0044e3cf
    IMUL EAX,dword ptr [EBX + 0x1cc4]   ; 0044e3d5
    PUSH EAX                            ; 0044e3dc
    CALL core_dlight.cpp_getRestoreMemory_FUN_0044e340 ; 0044e3dd
        ;   XREF to: 0044e340 (UNCONDITIONAL_CALL)  ; void * core_dlight.cpp_getRestoreMemory_FUN_0044e340(int pixel_count)
    MOV dword ptr [EBX + 0x2f9c],EAX    ; 0044e3e2
    MOV EBP,dword ptr [EBX + 0x1cc4]    ; 0044e3e8
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0044e3ee
    IMUL EAX,EBP                        ; 0044e3f4
    ADD ESP,0x4                         ; 0044e3f7
    ADD EAX,EAX                         ; 0044e3fa
    PUSH EAX                            ; 0044e3fc
    MOV EDX,dword ptr [EBX + 0x2f94]    ; 0044e3fd
    MOV ECX,dword ptr [EBX + 0x2f9c]    ; 0044e403
    CALL crt_watcom.c__memcpy_FUN_00481a28 ; 0044e409
        ;   XREF to: 00481a28 (UNCONDITIONAL_CALL)  ; void crt_watcom.c__memcpy_FUN_00481a28(void * dest, void * src, uint size)
    POP EBP                             ; 0044e40e
    POP EBX                             ; 0044e40f
    RET                                 ; 0044e410
    PUSH ESI                            ; 0044e411
        ;   Label: LAB_0044e411
    MOV ECX,0x57c5cc                    ; 0044e412 | = "..\\core\\dlight.cpp"
    MOV ESI,0xcd                        ; 0044e417
    PUSH 0x57c5df                       ; 0044e41c | = "CDemonLight::allocMasterZBuffer - We ..."
    MOV dword ptr [0x01cc4800],ECX      ; 0044e421 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 0044e427 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0044e42d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0044e432
    POP ESI                             ; 0044e435
    JMP 0x0044e3cf                      ; 0044e436
        ;   XREF to: 0044e3cf (UNCONDITIONAL_JUMP)  ; LAB_0044e3cf

