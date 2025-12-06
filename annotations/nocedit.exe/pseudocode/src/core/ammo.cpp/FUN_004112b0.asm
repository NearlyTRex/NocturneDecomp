; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_ammo.cpp_FUN_004112b0()
;
;
; XREF[1]:
;   core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360 at 004113bb
;
; Referenced Globals:
;   void* switchdataD_00411288 = 004112d6
;   undefined4 g_CAmmoClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x008223a4]      ; 004112b0 | g_CAmmoClassInfo.name_hash
        ;   Label: core_ammo.cpp_FUN_004112b0
    PUSH EDX                            ; 004112b6
    MOV ECX,dword ptr [ESP + 0x8]       ; 004112b7
    PUSH ECX                            ; 004112bb
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004112bc | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EAX + 0x318]     ; 004112c1
    ADD ESP,0x8                         ; 004112c7
    CMP EDX,0x8                         ; 004112ca
    JA 0x004112e0                       ; 004112cd | caseD_6
        ;   XREF to: 004112e0 (CONDITIONAL_JUMP)
    JMP dword ptr [EDX*0x4 + 0x411288]  ; 004112cf | pointer switchdataD_00411288
        ;   Label: switchD
    MOV dword ptr [EAX + 0x318],0x1     ; 004112d6
        ;   Label: caseD_0
    MOV EAX,0x1                         ; 004112e0
        ;   Label: caseD_6
    RET                                 ; 004112e5
    MOV dword ptr [EAX + 0x318],0x2     ; 004112e6
        ;   Label: caseD_1
    MOV EAX,0x1                         ; 004112f0
    RET                                 ; 004112f5
    MOV dword ptr [EAX + 0x318],0x3     ; 004112f6
        ;   Label: caseD_2
    MOV EAX,0x1                         ; 00411300
    RET                                 ; 00411305
    MOV dword ptr [EAX + 0x318],0x4     ; 00411306
        ;   Label: caseD_3
    MOV EAX,0x1                         ; 00411310
    RET                                 ; 00411315
    MOV dword ptr [EAX + 0x318],0x5     ; 00411316
        ;   Label: caseD_4
    MOV EAX,0x1                         ; 00411320
    RET                                 ; 00411325
    MOV dword ptr [EAX + 0x318],0x7     ; 00411326
        ;   Label: caseD_5
    MOV EAX,0x1                         ; 00411330
    RET                                 ; 00411335
    MOV dword ptr [EAX + 0x318],0x8     ; 00411336
        ;   Label: caseD_7
    MOV EAX,0x1                         ; 00411340
    RET                                 ; 00411345
    MOV dword ptr [EAX + 0x318],0x0     ; 00411346
        ;   Label: caseD_8
    MOV EAX,0x1                         ; 00411350
    RET                                 ; 00411355

