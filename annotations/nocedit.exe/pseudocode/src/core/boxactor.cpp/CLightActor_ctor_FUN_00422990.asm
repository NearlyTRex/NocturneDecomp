; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CLightActor * core_boxactor.cpp_CLightActor_ctor_FUN_00422990(CLightActor * this_ptr)
;
; Parameters:
; CLightActor *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_boxactor.cpp_FUN_00422950 at 0042296d
;
; Referenced Globals:
;   CDemonActor_vtable PTR_core_box.cpp_FUN_0065b2a4
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_ctor_FUN_00421700
;   core_dlight.cpp_CDemonLight_ctor_FUN_004726a0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00422990
        ;   Label: core_boxactor.cpp_CLightActor_ctor_FUN_00422990
    PUSH EAX                            ; 00422994
    CALL core_boxactor.cpp_CBoxActor_ctor_FUN_00421700 ; 00422995
        ;   XREF to: 00421700 (UNCONDITIONAL_CALL)  ; CBoxActor * core_boxactor.cpp_CBoxActor_ctor_FUN_00421700(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 0042299a
    PUSH 0x100                          ; 0042299d
    PUSH 0x100                          ; 004229a2
    ADD EAX,0x670                       ; 004229a7
    PUSH EAX                            ; 004229ac
    CALL core_dlight.cpp_CDemonLight_ctor_FUN_004726a0 ; 004229ad
        ;   XREF to: 004726a0 (UNCONDITIONAL_CALL)  ; CDemonLight * core_dlight.cpp_CDemonLight_ctor_FUN_004726a0(CDemonLight * this_ptr)
    SUB EAX,0x670                       ; 004229b2
    MOV dword ptr [EAX + 0x154],0x65b2a4 ; 004229b7 | PTR_core_box.cpp_FUN_0065b2a4
    LEA EDX,[EAX + 0x361c]              ; 004229c1
    MOV dword ptr [EAX + 0x2324],0x1    ; 004229c7
    MOV dword ptr [EDX + 0x8],0x0       ; 004229d1
    MOV ECX,dword ptr [EDX + 0x8]       ; 004229d8
    MOV dword ptr [EDX + 0x4],ECX       ; 004229db
    MOV ECX,dword ptr [EDX + 0x4]       ; 004229de
    MOV dword ptr [EDX],ECX             ; 004229e1
    LEA EDX,[EAX + 0x3628]              ; 004229e3
    MOV dword ptr [EDX + 0x8],0x0       ; 004229e9
    MOV ECX,dword ptr [EDX + 0x8]       ; 004229f0
    MOV dword ptr [EDX + 0x4],ECX       ; 004229f3
    MOV ECX,dword ptr [EDX + 0x4]       ; 004229f6
    MOV dword ptr [EDX],ECX             ; 004229f9
    MOV dword ptr [EAX + 0x3634],0x0    ; 004229fb
    ADD ESP,0xc                         ; 00422a05
    MOV dword ptr [EAX + 0x66c],0x1     ; 00422a08
    RET                                 ; 00422a12

