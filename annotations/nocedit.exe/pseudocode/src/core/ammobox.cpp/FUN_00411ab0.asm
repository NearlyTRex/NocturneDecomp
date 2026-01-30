; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_ammobox_cpp_FUN_00411ab0(void)
;
;
; XREF[1]:
;   core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30 at 00411bdf
;
; Referenced Globals:
;   void* switchdataD_00411a9c = 00411ad6
;   undefined4 g_CAmmoBoxClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x008223e0]      ; 00411ab0 | g_CAmmoBoxClassInfo.name_hash
        ;   Label: core_ammobox.cpp_FUN_00411ab0
    PUSH EDX                            ; 00411ab6
    MOV ECX,dword ptr [ESP + 0x8]       ; 00411ab7
    PUSH ECX                            ; 00411abb
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00411abc
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,dword ptr [EAX + 0x318]     ; 00411ac1
    ADD ESP,0x8                         ; 00411ac7
    CMP EDX,0x4                         ; 00411aca
    JA 0x00411ae0                       ; 00411acd
        ;   XREF to: 00411ae0 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x411a9c]  ; 00411acf | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV dword ptr [EAX + 0x318],0x1     ; 00411ad6
        ;   Label: caseD_0
    MOV EAX,0x1                         ; 00411ae0
        ;   Label: default
    RET                                 ; 00411ae5
    MOV dword ptr [EAX + 0x318],0x2     ; 00411ae6
        ;   Label: caseD_1
    MOV EAX,0x1                         ; 00411af0
    RET                                 ; 00411af5
    MOV dword ptr [EAX + 0x318],0x3     ; 00411af6
        ;   Label: caseD_2
    MOV EAX,0x1                         ; 00411b00
    RET                                 ; 00411b05
    MOV dword ptr [EAX + 0x318],0x4     ; 00411b06
        ;   Label: caseD_3
    MOV EAX,0x1                         ; 00411b10
    RET                                 ; 00411b15
    MOV dword ptr [EAX + 0x318],0x0     ; 00411b16
        ;   Label: caseD_4
    MOV EAX,0x1                         ; 00411b20
    RET                                 ; 00411b25

