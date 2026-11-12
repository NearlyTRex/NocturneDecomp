; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveActor_FUN_0040b6f0(CDemonActor **actor_ptr,char *property_name)
;
; Parameters:
; CDemonActor * *  Stack[0x4]:4   actor_ptr
; char *           Stack[0x8]:4   property_name
;
; XREF[39]:
;   core_ammobox.cpp_CAmmoBox_archive_FUN_0040e400 at 0040e4ae
;   core_bodypart.cpp_CBodyPart_archive_FUN_004193c0 at 00419559
;   core_boneguy.cpp_CBoneGuy_archive_FUN_0041d0d0 at 0041d280
;   core_boxactor.cpp_CBoxActor_archive_FUN_00422760 at 0042281f
;   core_chain.cpp_CChain_archive_FUN_00436d50 at 00436d92
;   core_charactr.cpp_CCharacter_archive_FUN_0042c7f0 at 0042c8d4
;   core_construc.cpp_CConstruct_archive_FUN_00446e30 at 00447050
;   core_crate.cpp_CCrate_archive_FUN_00449480 at 004494bb
;   core_demnfolk.cpp_CDemnfolk_archive_FUN_0045c1e0 at 0045c283
;   core_dest.cpp_CActorDestination_archive_FUN_0045d5b0 at 0045d5fd
;   ... and 29 more
;
; Referenced Globals:
;   undefined4 DAT_005d2ab1
;   undefined1 DAT_006106c0
;   undefined4 DAT_0061f650
;   undefined4 DAT_007c3034
;   undefined4 DAT_007c3038
;   undefined4 DAT_007c303c
;   undefined4 DAT_01d2c900
;
; Called Functions:
;   core_mission.cpp_CDemonMission_loadActor_FUN_0051afa0
;   core_mission.cpp_CDemonMission_saveActor_FUN_0051b100
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b6f0
        ;   Label: core_actor.cpp_archiveActor_FUN_0040b6f0
    PUSH ESI                            ; 0040b6f1
    PUSH EBP                            ; 0040b6f2
    CMP dword ptr [0x007c3038],0x1      ; 0040b6f3 | DAT_007c3038
    JNZ 0x0040b728                      ; 0040b6fa
        ;   XREF to: 0040b728 (CONDITIONAL_JUMP)  ; LAB_0040b728
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040b6fc
    PUSH EDX                            ; 0040b700
    MOV ECX,dword ptr [0x007c303c]      ; 0040b701 | DAT_007c303c
    PUSH ECX                            ; 0040b707
    MOV EBX,dword ptr [0x007c3034]      ; 0040b708 | DAT_007c3034
    PUSH EBX                            ; 0040b70e
    MOV ESI,dword ptr [0x0061f650]      ; 0040b70f | DAT_0061f650
    PUSH ESI                            ; 0040b715 | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_loadActor_FUN_0051afa0 ; 0040b716
        ;   XREF to: 0051afa0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_loadActor_FUN_0051afa0(CDemonMission * this_ptr, _FILE * file, CDemonActor * current_actor, char * property_description)
    ADD ESP,0x10                        ; 0040b71b
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040b71e
    MOV dword ptr [EDX],EAX             ; 0040b722
    POP EBP                             ; 0040b724
    POP ESI                             ; 0040b725
    POP EBX                             ; 0040b726
    RET                                 ; 0040b727
    PUSH EDI                            ; 0040b728
        ;   Label: LAB_0040b728
    PUSH 0x6106c0                       ; 0040b729 | DAT_006106c0
    PUSH 0x5d2ab1                       ; 0040b72e | DAT_005d2ab1
    MOV ECX,dword ptr [0x007c3034]      ; 0040b733 | DAT_007c3034
    PUSH ECX                            ; 0040b739
    CALL crt_unknown.c_FUN_005c03c0     ; 0040b73a
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0040b73f
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040b742
    PUSH EBX                            ; 0040b746
    MOV ESI,dword ptr [0x007c303c]      ; 0040b747 | DAT_007c303c
    PUSH ESI                            ; 0040b74d
    MOV EDI,dword ptr [0x007c3034]      ; 0040b74e | DAT_007c3034
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0040b754
    PUSH EDI                            ; 0040b758
    MOV EBP,dword ptr [EAX]             ; 0040b759
    PUSH EBP                            ; 0040b75b
    MOV EAX,[0x0061f650]                ; 0040b75c | DAT_0061f650
    PUSH EAX                            ; 0040b761 | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_saveActor_FUN_0051b100 ; 0040b762
        ;   XREF to: 0051b100 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_saveActor_FUN_0051b100(CDemonMission * this_ptr, CDemonActor * actor_ptr, _FILE * file, CDemonActor * current_actor, ...)
    ADD ESP,0x14                        ; 0040b767
    POP EDI                             ; 0040b76a
    POP EBP                             ; 0040b76b
    POP ESI                             ; 0040b76c
    POP EBX                             ; 0040b76d
    RET                                 ; 0040b76e

