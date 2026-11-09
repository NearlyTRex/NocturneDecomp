; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl core_dlight_cpp_getRestoreMemory_FUN_0045c400(int pixel_count)
;
; Parameters:
; int              Stack[0x4]:4   pixel_count
;
; XREF[1]:
;   core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_0045c480 at 0045c49d
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005bb24c
;   TerminatedCString s_getRestoreMemory_Need_mo_005bb25f
;   undefined4 DAT_01b49bdc
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0045c400
        ;   Label: core_dlight.cpp_getRestoreMemory_FUN_0045c400
    MOV EAX,0x300064                    ; 0045c401
    SUB EAX,dword ptr [ESP + 0x8]       ; 0045c406
    MOV ECX,dword ptr [0x01b49bdc]      ; 0045c40a | DAT_01b49bdc
    SUB EAX,0x4                         ; 0045c410
    CMP EAX,ECX                         ; 0045c413
    JC 0x0045c43f                       ; 0045c415
        ;   XREF to: 0045c43f (CONDITIONAL_JUMP)  ; LAB_0045c43f
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045c417
        ;   Label: LAB_0045c417
    MOV EAX,[0x01b49bdc]                ; 0045c41b | DAT_01b49bdc
    MOV EDI,dword ptr [0x01b49bdc]      ; 0045c420 | DAT_01b49bdc
    ADD EAX,EAX                         ; 0045c426
    ADD EDX,0x8                         ; 0045c428
    ADD EAX,0x1549b14                   ; 0045c42b
    ADD EDI,EDX                         ; 0045c430
    ADD EAX,0x10                        ; 0045c432
    MOV dword ptr [0x01b49bdc],EDI      ; 0045c435 | DAT_01b49bdc
    AND AL,0xf0                         ; 0045c43b
    POP EDI                             ; 0045c43d
    RET                                 ; 0045c43e
    PUSH ESI                            ; 0045c43f
        ;   Label: LAB_0045c43f
    PUSH EBX                            ; 0045c440
    MOV EBX,0x5bb24c                    ; 0045c441 | = "..\\core\\dlight.cpp"
    MOV ESI,0xa3                        ; 0045c446
    PUSH 0x5bb25f                       ; 0045c44b | = "getRestoreMemory - Need more static m..."
    MOV dword ptr [0x01d71de0],EBX      ; 0045c450 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0045c456 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045c45c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0045c461
    POP EBX                             ; 0045c464
    POP ESI                             ; 0045c465
    JMP 0x0045c417                      ; 0045c466
        ;   XREF to: 0045c417 (UNCONDITIONAL_JUMP)  ; LAB_0045c417

