; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_platfrm_cpp_CPlatform_propertyActionStateCallback_FUN_0054e760(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_platfrm.cpp_CPlatform_getPropertyList_FUN_0054e7d0 at 0054e8fd
;
; Referenced Globals:
;   undefined4 g_CPlatformClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_platfrm.cpp_CPlatform_FUN_0054cab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e760
        ;   Label: core_platfrm.cpp_CPlatform_propertyActionStateCallback_FUN_0054e760
    MOV EDX,dword ptr [0x030d508c]      ; 0054e761 | g_CPlatformClassInfo.name_hash
    PUSH EDX                            ; 0054e767
    MOV ECX,dword ptr [ESP + 0xc]       ; 0054e768
    PUSH ECX                            ; 0054e76c
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0054e76d
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0054e772
    MOV EBX,dword ptr [EAX + 0x2d4]     ; 0054e775
    MOV EDX,EAX                         ; 0054e77b
    TEST EBX,EBX                        ; 0054e77d
    JNZ 0x0054e7a5                      ; 0054e77f
        ;   XREF to: 0054e7a5 (CONDITIONAL_JUMP)  ; LAB_0054e7a5
    MOV dword ptr [EAX + 0x2dc],0x3f800000 ; 0054e781
    MOV dword ptr [EAX + 0x2d4],0x1     ; 0054e78b
    PUSH EDX                            ; 0054e795
    CALL core_platfrm.cpp_CPlatform_FUN_0054cab0 ; 0054e796
        ;   XREF to: 0054cab0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_FUN_0054cab0(CPlatform * this_ptr)
    MOV EAX,0x1                         ; 0054e79b
    ADD ESP,0x4                         ; 0054e7a0
    POP EBX                             ; 0054e7a3
    RET                                 ; 0054e7a4
    MOV dword ptr [EAX + 0x2dc],0x0     ; 0054e7a5
        ;   Label: LAB_0054e7a5
    MOV dword ptr [EAX + 0x2d4],0x0     ; 0054e7af
    PUSH EDX                            ; 0054e7b9
    CALL core_platfrm.cpp_CPlatform_FUN_0054cab0 ; 0054e7ba
        ;   XREF to: 0054cab0 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_FUN_0054cab0(CPlatform * this_ptr)
    MOV EAX,0x1                         ; 0054e7bf
    ADD ESP,0x4                         ; 0054e7c4
    POP EBX                             ; 0054e7c7
    RET                                 ; 0054e7c8

