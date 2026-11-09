; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightActor * __cdecl core_boxactor_cpp_CLightActor_ctor_FUN_00420360(CLightActor *this_ptr)
;
; Parameters:
; CLightActor *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_boxactor.cpp_FUN_00420330 at 00420343
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_ctor_FUN_0041efe0
;   core_dlight.cpp_CDemonLight_ctor_FUN_0045c180
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00420360
        ;   Label: core_boxactor.cpp_CLightActor_ctor_FUN_00420360
    PUSH EAX                            ; 00420364
    CALL core_boxactor.cpp_CBoxActor_ctor_FUN_0041efe0 ; 00420365
        ;   XREF to: 0041efe0 (UNCONDITIONAL_CALL)  ; CBoxActor * core_boxactor.cpp_CBoxActor_ctor_FUN_0041efe0(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 0042036a
    PUSH 0x100                          ; 0042036d
    PUSH 0x100                          ; 00420372
    ADD EAX,0x6ec                       ; 00420377
    PUSH EAX                            ; 0042037c
    CALL core_dlight.cpp_CDemonLight_ctor_FUN_0045c180 ; 0042037d
        ;   XREF to: 0045c180 (UNCONDITIONAL_CALL)  ; CDemonLight * core_dlight.cpp_CDemonLight_ctor_FUN_0045c180(CDemonLight * this_ptr, int shadow_map_width, int shadow_map_height)
    SUB EAX,0x6ec                       ; 00420382
    MOV dword ptr [EAX + 0x154],0x5dca74 ; 00420387
    LEA EDX,[EAX + 0x3698]              ; 00420391
    MOV dword ptr [EAX + 0x23a0],0x1    ; 00420397
    MOV dword ptr [EDX + 0x8],0x0       ; 004203a1
    MOV ECX,dword ptr [EDX + 0x8]       ; 004203a8
    MOV dword ptr [EDX + 0x4],ECX       ; 004203ab
    MOV ECX,dword ptr [EDX + 0x4]       ; 004203ae
    MOV dword ptr [EDX],ECX             ; 004203b1
    LEA EDX,[EAX + 0x36a4]              ; 004203b3
    MOV dword ptr [EDX + 0x8],0x0       ; 004203b9
    MOV ECX,dword ptr [EDX + 0x8]       ; 004203c0
    MOV dword ptr [EDX + 0x4],ECX       ; 004203c3
    MOV ECX,dword ptr [EDX + 0x4]       ; 004203c6
    MOV dword ptr [EDX],ECX             ; 004203c9
    MOV dword ptr [EAX + 0x36b0],0x0    ; 004203cb
    ADD ESP,0xc                         ; 004203d5
    MOV dword ptr [EAX + 0x6e8],0x1     ; 004203d8
    RET                                 ; 004203e2

