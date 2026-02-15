; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_platfrm_cpp_CPlatform_propertyActionSlewCallback_FUN_0054e480(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_platfrm.cpp_CPlatform_getPropertyList_FUN_0054e7d0 at 0054e8e5
;   core_platfrm.cpp_CPlatform_processInEditor_FUN_0054ea00 at 0054eb47
;
; Referenced Globals:
;   void* switchdataD_0054e464 = 0054e4a8
;   undefined4 g_CPlatformClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x030d508c]      ; 0054e480 | g_CPlatformClassInfo.name_hash
        ;   Label: core_platfrm.cpp_CPlatform_propertyActionSlewCallback_FUN_0054e480
    PUSH EDX                            ; 0054e486
    MOV ECX,dword ptr [ESP + 0x8]       ; 0054e487
    PUSH ECX                            ; 0054e48b
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0054e48c
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0054e491
    MOV EDX,dword ptr [EAX + 0x724]     ; 0054e494
    MOV ECX,EAX                         ; 0054e49a
    CMP EDX,0x3                         ; 0054e49c
    JA 0x0054e4d0                       ; 0054e49f
        ;   XREF to: 0054e4d0 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EDX*0x4 + 0x54e464]  ; 0054e4a1 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV dword ptr [EAX + 0x724],0x1     ; 0054e4a8
        ;   Label: caseD_0
    MOV EAX,0x1                         ; 0054e4b2
        ;   Label: LAB_0054e4b2
    RET                                 ; 0054e4b7
    MOV dword ptr [EAX + 0x724],0x2     ; 0054e4b8
        ;   Label: caseD_1
    JMP 0x0054e4b2                      ; 0054e4c2
        ;   XREF to: 0054e4b2 (UNCONDITIONAL_JUMP)  ; LAB_0054e4b2
    MOV dword ptr [EAX + 0x724],0x3     ; 0054e4c4
        ;   Label: caseD_2
    JMP 0x0054e4b2                      ; 0054e4ce
        ;   XREF to: 0054e4b2 (UNCONDITIONAL_JUMP)  ; LAB_0054e4b2
    MOV dword ptr [ECX + 0x724],0x0     ; 0054e4d0
        ;   Label: caseD_3
    MOV EAX,0x1                         ; 0054e4da
    RET                                 ; 0054e4df

