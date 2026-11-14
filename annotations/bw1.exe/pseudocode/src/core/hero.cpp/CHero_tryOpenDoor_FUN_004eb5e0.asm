; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[11]:
;   core_colonel.cpp_CColonel_process_FUN_00444550 at 004449ea
;   core_doc.cpp_CDoc_doHeroAction_FUN_00474fc0 at 0047520b
;   core_doc.cpp_FUN_0046bde0 at 0046c8ed
;   core_gabriela.cpp_CGabriella_process_FUN_004c65f0 at 004c78c5
;   core_gabriela.cpp_FUN_004c83b0 at 004c885b
;   core_haystack.cpp_CHaystack_process_FUN_004e9250 at 004e971c
;   core_hero.cpp_CHero_doHeroAction_FUN_004ec640 at 004ec7f3
;   core_icepick.cpp_CIcePick_process_FUN_004f0e50 at 004f1441
;   core_stranger.cpp_CStranger_handleActionButton_FUN_00591120 at 005912a9
;   core_stranger.cpp_FUN_005881d0 at 00588925
;   ... and 1 more
;
; Called Functions:
;   core_door.cpp_CDoor_onLocked_FUN_00478d10
;   core_door.cpp_CDoor_onOpened_FUN_004774d0
;   core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004fc240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb5e0
        ;   Label: core_hero.cpp_CHero_tryOpenDoor_FUN_004eb5e0
    PUSH ESI                            ; 004eb5e1
    PUSH EBP                            ; 004eb5e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004eb5e3
    MOV EDX,dword ptr [EBX + 0x1ff74]   ; 004eb5e7
    XOR ESI,ESI                         ; 004eb5ed
    TEST EDX,EDX                        ; 004eb5ef
    JNZ 0x004eb5f9                      ; 004eb5f1
        ;   XREF to: 004eb5f9 (CONDITIONAL_JUMP)  ; LAB_004eb5f9
    MOV EAX,ESI                         ; 004eb5f3
    POP EBP                             ; 004eb5f5
    POP ESI                             ; 004eb5f6
    POP EBX                             ; 004eb5f7
    RET                                 ; 004eb5f8
    PUSH 0x1                            ; 004eb5f9
        ;   Label: LAB_004eb5f9
    MOV ECX,dword ptr [EDX + 0x990]     ; 004eb5fb
    PUSH ECX                            ; 004eb601
    LEA EAX,[EBX + 0x1fae8]             ; 004eb602
    PUSH EAX                            ; 004eb608
    CALL core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004fc240 ; 004eb609
        ;   XREF to: 004fc240 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004fc240(CInventory * this_ptr, uint key_mask, int show_message)
    ADD ESP,0xc                         ; 004eb60e
    TEST EAX,EAX                        ; 004eb611
    JZ 0x004eb639                       ; 004eb613
        ;   XREF to: 004eb639 (CONDITIONAL_JUMP)  ; LAB_004eb639
    MOV EBP,dword ptr [EBX + 0x1ff74]   ; 004eb615
    PUSH EBP                            ; 004eb61b
    MOV ESI,0x1                         ; 004eb61c
    CALL core_door.cpp_CDoor_onOpened_FUN_004774d0 ; 004eb621
        ;   XREF to: 004774d0 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_onOpened_FUN_004774d0(CDoor * this_ptr)
    ADD ESP,0x4                         ; 004eb626
    MOV dword ptr [EBX + 0x1ff74],0x0   ; 004eb629
    MOV EAX,ESI                         ; 004eb633
    POP EBP                             ; 004eb635
    POP ESI                             ; 004eb636
    POP EBX                             ; 004eb637
    RET                                 ; 004eb638
    PUSH EDI                            ; 004eb639
        ;   Label: LAB_004eb639
    MOV EDI,dword ptr [EBX + 0x1ff74]   ; 004eb63a
    PUSH EDI                            ; 004eb640
    CALL core_door.cpp_CDoor_onLocked_FUN_00478d10 ; 004eb641
        ;   XREF to: 00478d10 (UNCONDITIONAL_CALL)  ; uint core_door.cpp_CDoor_onLocked_FUN_00478d10(CDoor * this_ptr)
    ADD ESP,0x4                         ; 004eb646
    POP EDI                             ; 004eb649
    MOV dword ptr [EBX + 0x1ff74],0x0   ; 004eb64a
    MOV EAX,ESI                         ; 004eb654
    POP EBP                             ; 004eb656
    POP ESI                             ; 004eb657
    POP EBX                             ; 004eb658
    RET                                 ; 004eb659

