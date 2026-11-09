; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHeroPlaceholder * core_hero_cpp_CHeroPlaceholder_ctor_FUN_004d0940(CHeroPlaceholder *this_ptr)
;
; Parameters:
; CHeroPlaceholder * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_hero.cpp_FUN_004d0910 at 004d0923
;   core_mission.cpp_FUN_004fd280 at 004fd363
;
; Referenced Globals:
;   undefined1 DAT_005da037
;   undefined1 DAT_005da038
;   undefined1 DAT_005da039
;   undefined1 DAT_005da03a
;   undefined4 g_CHeroPlaceholderVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004d0940
        ;   Label: core_hero.cpp_CHeroPlaceholder_ctor_FUN_004d0940
    PUSH EDI                            ; 004d0941
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d0942
    PUSH EDX                            ; 004d0946
    MOV ESI,0x5da037                    ; 004d0947 | DAT_005da037
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 004d094c
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    MOV EDX,EAX                         ; 004d0951
    MOV dword ptr [EAX + 0x2b0],0x5f83f4 ; 004d0953 | g_CHeroPlaceholderVTable
    ADD ESP,0x4                         ; 004d095d
    MOV dword ptr [EAX + 0xfc],0x1      ; 004d0960
    LEA EDI,[EAX + 0x2b8]               ; 004d096a
    MOV dword ptr [EAX + 0x2b4],0x0     ; 004d0970
    PUSH EDI                            ; 004d097a
    MOV AL,byte ptr [ESI]               ; 004d097b | DAT_005da037 | DAT_005da039
        ;   Label: LAB_004d097b
    MOV byte ptr [EDI],AL               ; 004d097d
    CMP AL,0x0                          ; 004d097f
    JZ 0x004d0993                       ; 004d0981
        ;   XREF to: 004d0993 (CONDITIONAL_JUMP)  ; LAB_004d0993
    MOV AL,byte ptr [ESI + 0x1]         ; 004d0983 | DAT_005da038 | DAT_005da03a
    ADD ESI,0x2                         ; 004d0986
    MOV byte ptr [EDI + 0x1],AL         ; 004d0989
    ADD EDI,0x2                         ; 004d098c
    CMP AL,0x0                          ; 004d098f
    JNZ 0x004d097b                      ; 004d0991
        ;   XREF to: 004d097b (CONDITIONAL_JUMP)  ; LAB_004d097b
    POP EDI                             ; 004d0993
        ;   Label: LAB_004d0993
    MOV EAX,EDX                         ; 004d0994
    POP EDI                             ; 004d0996
    POP ESI                             ; 004d0997
    RET                                 ; 004d0998

