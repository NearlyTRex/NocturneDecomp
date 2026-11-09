; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_allocMasterZBuffer_FUN_0045c480(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890 at 00535179
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005bb28a
;   TerminatedCString s_CDemonLight_allocMasterZ_005bb29d
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_dlight.cpp_getRestoreMemory_FUN_0045c400
;   core_main.c_FUN_004e4330
;   crt_watcom.c__memcpy_FUN_00495f68
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c480
        ;   Label: core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_0045c480
    PUSH EBP                            ; 0045c481
    MOV EBX,dword ptr [ESP + 0xc]       ; 0045c482
    CMP dword ptr [EBX + 0x164],0x0     ; 0045c486
    JNZ 0x0045c4d1                      ; 0045c48d
        ;   XREF to: 0045c4d1 (CONDITIONAL_JUMP)  ; LAB_0045c4d1
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0045c48f
        ;   Label: LAB_0045c48f
    IMUL EAX,dword ptr [EBX + 0x1cc4]   ; 0045c495
    PUSH EAX                            ; 0045c49c
    CALL core_dlight.cpp_getRestoreMemory_FUN_0045c400 ; 0045c49d
        ;   XREF to: 0045c400 (UNCONDITIONAL_CALL)  ; void * core_dlight.cpp_getRestoreMemory_FUN_0045c400(int pixel_count)
    MOV dword ptr [EBX + 0x2f9c],EAX    ; 0045c4a2
    MOV EBP,dword ptr [EBX + 0x1cc4]    ; 0045c4a8
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0045c4ae
    IMUL EAX,EBP                        ; 0045c4b4
    ADD ESP,0x4                         ; 0045c4b7
    ADD EAX,EAX                         ; 0045c4ba
    PUSH EAX                            ; 0045c4bc
    MOV EDX,dword ptr [EBX + 0x2f94]    ; 0045c4bd
    MOV ECX,dword ptr [EBX + 0x2f9c]    ; 0045c4c3
    CALL crt_watcom.c__memcpy_FUN_00495f68 ; 0045c4c9
        ;   XREF to: 00495f68 (UNCONDITIONAL_CALL)  ; undefined crt_watcom.c__memcpy_FUN_00495f68()
    POP EBP                             ; 0045c4ce
    POP EBX                             ; 0045c4cf
    RET                                 ; 0045c4d0
    PUSH ESI                            ; 0045c4d1
        ;   Label: LAB_0045c4d1
    MOV ECX,0x5bb28a                    ; 0045c4d2 | = "..\\core\\dlight.cpp"
    MOV ESI,0xcd                        ; 0045c4d7
    PUSH 0x5bb29d                       ; 0045c4dc | = "CDemonLight::allocMasterZBuffer - We ..."
    MOV dword ptr [0x01d71de0],ECX      ; 0045c4e1 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0045c4e7 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045c4ed
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0045c4f2
    POP ESI                             ; 0045c4f5
    JMP 0x0045c48f                      ; 0045c4f6
        ;   XREF to: 0045c48f (UNCONDITIONAL_JUMP)  ; LAB_0045c48f

