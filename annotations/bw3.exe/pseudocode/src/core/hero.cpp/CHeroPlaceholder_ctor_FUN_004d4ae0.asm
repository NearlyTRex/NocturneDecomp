; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHeroPlaceholder * core_hero_cpp_CHeroPlaceholder_ctor_FUN_004d4ae0(CHeroPlaceholder *this_ptr)
;
; Parameters:
; CHeroPlaceholder * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_hero.cpp_FUN_004d4ab0 at 004d4ac3
;   core_mission.cpp_FUN_004f7a20 at 004f7b03
;
; Referenced Globals:
;   undefined1 DAT_005c50eb
;   undefined1 DAT_005c50ec
;   undefined1 DAT_005c50ed
;   undefined1 DAT_005c50ee
;   void* g_CHeroPlaceholderVTable = 00408890
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004d4ae0
        ;   Label: core_hero.cpp_CHeroPlaceholder_ctor_FUN_004d4ae0
    PUSH EDI                            ; 004d4ae1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d4ae2
    PUSH EDX                            ; 004d4ae6
    MOV ESI,0x5c50eb                    ; 004d4ae7 | DAT_005c50eb
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 004d4aec
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    MOV EDX,EAX                         ; 004d4af1
    MOV dword ptr [EAX + 0x154],0x5e16a4 ; 004d4af3 | g_CHeroPlaceholderVTable
    ADD ESP,0x4                         ; 004d4afd
    MOV dword ptr [EAX + 0xfc],0x1      ; 004d4b00
    LEA EDI,[EAX + 0x15c]               ; 004d4b0a
    MOV dword ptr [EAX + 0x158],0x0     ; 004d4b10
    PUSH EDI                            ; 004d4b1a
    MOV AL,byte ptr [ESI]               ; 004d4b1b | DAT_005c50eb | DAT_005c50ed
        ;   Label: LAB_004d4b1b
    MOV byte ptr [EDI],AL               ; 004d4b1d
    CMP AL,0x0                          ; 004d4b1f
    JZ 0x004d4b33                       ; 004d4b21
        ;   XREF to: 004d4b33 (CONDITIONAL_JUMP)  ; LAB_004d4b33
    MOV AL,byte ptr [ESI + 0x1]         ; 004d4b23 | DAT_005c50ec | DAT_005c50ee
    ADD ESI,0x2                         ; 004d4b26
    MOV byte ptr [EDI + 0x1],AL         ; 004d4b29
    ADD EDI,0x2                         ; 004d4b2c
    CMP AL,0x0                          ; 004d4b2f
    JNZ 0x004d4b1b                      ; 004d4b31
        ;   XREF to: 004d4b1b (CONDITIONAL_JUMP)  ; LAB_004d4b1b
    POP EDI                             ; 004d4b33
        ;   Label: LAB_004d4b33
    MOV EAX,EDX                         ; 004d4b34
    POP EDI                             ; 004d4b36
    POP ESI                             ; 004d4b37
    RET                                 ; 004d4b38

