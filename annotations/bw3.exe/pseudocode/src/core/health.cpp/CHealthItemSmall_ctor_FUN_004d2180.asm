; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHealthItemSmall * __cdecl core_health_cpp_CHealthItemSmall_ctor_FUN_004d2180(CHealthItemSmall *this_ptr)
;
; Parameters:
; CHealthItemSmall * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_health.cpp_FUN_004d2150 at 004d2163
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   core_health.cpp_CHealthItem_ctor_FUN_004d1d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2180
        ;   Label: core_health.cpp_CHealthItemSmall_ctor_FUN_004d2180
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d2181
    PUSH EDX                            ; 004d2185
    CALL core_health.cpp_CHealthItem_ctor_FUN_004d1d80 ; 004d2186
        ;   XREF to: 004d1d80 (UNCONDITIONAL_CALL)  ; CHealthItem * core_health.cpp_CHealthItem_ctor_FUN_004d1d80(CHealthItem * this_ptr)
    ADD ESP,0x4                         ; 004d218b
    PUSH 0x5c4acf                       ; 004d218e
    MOV EBX,EAX                         ; 004d2193
    ADD EAX,0x158                       ; 004d2195
    PUSH EAX                            ; 004d219a
    MOV dword ptr [EAX + -0x4],0x5e13f4 ; 004d219b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 004d21a2
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004d21a7
    MOV dword ptr [EBX + 0x2d8],0x41200000 ; 004d21aa
    MOV EAX,EBX                         ; 004d21b4
    MOV dword ptr [EBX + 0x2e0],0x1     ; 004d21b6
    POP EBX                             ; 004d21c0
    RET                                 ; 004d21c1

