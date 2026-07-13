; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041ec60(int param_1)
;
; Local Variables:
; undefined        Stack[-0x10c]:1  local_10c
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   FUN_0041f600 at 0041f60a
;   FUN_00534d30 at 00534d35
;
; Referenced Globals:
;   undefined4 s_modelName_0057981f+2
;   string s_weightInPounds_0057982b
;   undefined4 DAT_0057983a
;   undefined4 DAT_0057983e
;   string s_loopWavName_00579842
;   string s_collisionWavName_0057984e
;   string s_canBeCarried_0057985f
;   string s_pickupType_0057986c
;   string s_carriedByActor_00579877
;   string s_canBePushed_00579886
;   string s_pushedByActor_00579892
;   string s_groundType_005798a0
;   string s_simBox_005798ab
;   string s_plotInShadowFlag_005798b2
;   string s_collisionFlag_005798c3
;   ... and 9 more
;
; Called Functions:
;   FUN_0040c450
;   FUN_0040c6d0
;   FUN_0040c880
;   FUN_0040c900
;   FUN_0040c980
;   FUN_0040ca00
;   FUN_0040ce80
;   FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041ec60
        ;   Label: FUN_0041ec60
    PUSH ESI                            ; 0041ec61
    SUB ESP,0x104                       ; 0041ec62
    MOV EBX,dword ptr [ESP + 0x110]     ; 0041ec68
    PUSH EBX                            ; 0041ec6f
    CALL FUN_0040d2d0                   ; 0041ec70
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2d0()
    ADD ESP,0x4                         ; 0041ec75
    PUSH 0x579821                       ; 0041ec78 | s_modelName_0057981f+2
    LEA EAX,[EBX + 0x150]               ; 0041ec7d
    PUSH EAX                            ; 0041ec83
    CALL FUN_0040ca00                   ; 0041ec84
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ca00()
    ADD ESP,0x8                         ; 0041ec89
    PUSH 0x57982b                       ; 0041ec8c | = "weightInPounds"
    LEA EAX,[EBX + 0x388]               ; 0041ec91
    PUSH EAX                            ; 0041ec97
    CALL FUN_0040c880                   ; 0041ec98
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 0041ec9d
    PUSH 0x57983a                       ; 0041eca0 | DAT_0057983a
    LEA EAX,[EBX + 0x304]               ; 0041eca5
    PUSH EAX                            ; 0041ecab
    CALL FUN_0040c880                   ; 0041ecac
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 0041ecb1
    PUSH 0x57983e                       ; 0041ecb4 | DAT_0057983e
    LEA EAX,[EBX + 0x2f8]               ; 0041ecb9
    PUSH EAX                            ; 0041ecbf
    CALL FUN_0040c450                   ; 0041ecc0
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x8                         ; 0041ecc5
    PUSH 0x579842                       ; 0041ecc8 | = "loopWavName"
    LEA EAX,[EBX + 0x2cc]               ; 0041eccd
    PUSH EAX                            ; 0041ecd3
    CALL FUN_0040c6d0                   ; 0041ecd4
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 0041ecd9
    PUSH 0x57984e                       ; 0041ecdc | = "collisionWavName"
    LEA EAX,[EBX + 0x2e0]               ; 0041ece1
    PUSH EAX                            ; 0041ece7
    CALL FUN_0040c6d0                   ; 0041ece8
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    MOV EDX,dword ptr [0x005ad09c]      ; 0041eced | DAT_005ad09c
    ADD ESP,0x8                         ; 0041ecf3
    CMP EDX,0x7                         ; 0041ecf6
    JL 0x0041eeac                       ; 0041ecf9
        ;   XREF to: 0041eeac (CONDITIONAL_JUMP)  ; LAB_0041eeac
    PUSH 0x57986c                       ; 0041ecff | = "pickupType"
    LEA EAX,[EBX + 0x30c]               ; 0041ed04
    PUSH EAX                            ; 0041ed0a
    CALL FUN_0040c900                   ; 0041ed0b
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 0041ed10
    PUSH 0x579877                       ; 0041ed13 | = "carriedByActor"
        ;   Label: LAB_0041ed13
    LEA EAX,[EBX + 0x310]               ; 0041ed18
    PUSH EAX                            ; 0041ed1e
    CALL FUN_0040c980                   ; 0041ed1f
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c980()
    MOV ESI,dword ptr [0x005ad09c]      ; 0041ed24 | DAT_005ad09c
    ADD ESP,0x8                         ; 0041ed2a
    CMP ESI,0x2                         ; 0041ed2d
    JL 0x0041ed5a                       ; 0041ed30
        ;   XREF to: 0041ed5a (CONDITIONAL_JUMP)  ; LAB_0041ed5a
    PUSH 0x579886                       ; 0041ed32 | = "canBePushed"
    LEA EAX,[EBX + 0x314]               ; 0041ed37
    PUSH EAX                            ; 0041ed3d
    CALL FUN_0040c900                   ; 0041ed3e
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 0041ed43
    PUSH 0x579892                       ; 0041ed46 | = "pushedByActor"
    LEA EAX,[EBX + 0x318]               ; 0041ed4b
    PUSH EAX                            ; 0041ed51
    CALL FUN_0040c980                   ; 0041ed52
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c980()
    ADD ESP,0x8                         ; 0041ed57
    CMP dword ptr [0x005ad09c],0x3      ; 0041ed5a | DAT_005ad09c
        ;   Label: LAB_0041ed5a
    JL 0x0041ed77                       ; 0041ed61
        ;   XREF to: 0041ed77 (CONDITIONAL_JUMP)  ; LAB_0041ed77
    PUSH 0x5798a0                       ; 0041ed63 | = "groundType"
    LEA EAX,[EBX + 0x5e8]               ; 0041ed68
    PUSH EAX                            ; 0041ed6e
    CALL FUN_0040c900                   ; 0041ed6f
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 0041ed74
    CMP dword ptr [0x005ad09c],0x4      ; 0041ed77 | DAT_005ad09c
        ;   Label: LAB_0041ed77
    JL 0x0041eee6                       ; 0041ed7e
        ;   XREF to: 0041eee6 (CONDITIONAL_JUMP)  ; LAB_0041eee6
    PUSH 0x5798ab                       ; 0041ed84 | = "simBox"
    LEA EAX,[EBX + 0x38c]               ; 0041ed89
    PUSH EAX                            ; 0041ed8f
    CALL FUN_0040ce80                   ; 0041ed90
        ;   XREF to: 0040ce80 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce80()
    ADD ESP,0x8                         ; 0041ed95
    CMP dword ptr [0x005ad09c],0x5      ; 0041ed98 | DAT_005ad09c
        ;   Label: LAB_0041ed98
    JL 0x0041eef5                       ; 0041ed9f
        ;   XREF to: 0041eef5 (CONDITIONAL_JUMP)  ; LAB_0041eef5
    PUSH 0x5798b2                       ; 0041eda5 | = "plotInShadowFlag"
    LEA EAX,[EBX + 0x5ec]               ; 0041edaa
    PUSH EAX                            ; 0041edb0
    CALL FUN_0040c900                   ; 0041edb1
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 0041edb6
    CMP dword ptr [0x005ad09c],0x6      ; 0041edb9 | DAT_005ad09c
        ;   Label: LAB_0041edb9
    JL 0x0041ef04                       ; 0041edc0
        ;   XREF to: 0041ef04 (CONDITIONAL_JUMP)  ; LAB_0041ef04
    PUSH 0x5798c3                       ; 0041edc6 | = "collisionFlag"
    LEA EAX,[EBX + 0x5f0]               ; 0041edcb
    PUSH EAX                            ; 0041edd1
    CALL FUN_0040c900                   ; 0041edd2
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 0041edd7
    CMP dword ptr [0x005ad09c],0x8      ; 0041edda | DAT_005ad09c
        ;   Label: LAB_0041edda
    JL 0x0041ee0b                       ; 0041ede1
        ;   XREF to: 0041ee0b (CONDITIONAL_JUMP)  ; LAB_0041ee0b
    PUSH 0x5798d1                       ; 0041ede3 | = "isTransparent"
    LEA EAX,[EBX + 0xfc]                ; 0041ede8
    PUSH EAX                            ; 0041edee
    CALL FUN_0040c900                   ; 0041edef
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 0041edf4
    PUSH 0x5798df                       ; 0041edf7 | = "dontUseNormals"
    LEA EAX,[EBX + 0x5f4]               ; 0041edfc
    PUSH EAX                            ; 0041ee02
    CALL FUN_0040c900                   ; 0041ee03
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 0041ee08
    CMP dword ptr [0x005ad09c],0x9      ; 0041ee0b | DAT_005ad09c
        ;   Label: LAB_0041ee0b
    JNZ 0x0041ee26                      ; 0041ee12
        ;   XREF to: 0041ee26 (CONDITIONAL_JUMP)  ; LAB_0041ee26
    PUSH 0x5798ee                       ; 0041ee14 | = "descriptiveName"
    LEA EAX,[ESP + 0x4]                 ; 0041ee19
    PUSH EAX                            ; 0041ee1d
    CALL FUN_0040c6d0                   ; 0041ee1e
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 0041ee23
    CMP dword ptr [0x005ad09c],0xb      ; 0041ee26 | DAT_005ad09c
        ;   Label: LAB_0041ee26
    JL 0x0041ee43                       ; 0041ee2d
        ;   XREF to: 0041ee43 (CONDITIONAL_JUMP)  ; LAB_0041ee43
    PUSH 0x5798fe                       ; 0041ee2f | = "constrainExtentsActor"
    LEA EAX,[EBX + 0x31c]               ; 0041ee34
    PUSH EAX                            ; 0041ee3a
    CALL FUN_0040c980                   ; 0041ee3b
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c980()
    ADD ESP,0x8                         ; 0041ee40
    CMP dword ptr [0x005ad09c],0xc      ; 0041ee43 | DAT_005ad09c
        ;   Label: LAB_0041ee43
    JL 0x0041ee60                       ; 0041ee4a
        ;   XREF to: 0041ee60 (CONDITIONAL_JUMP)  ; LAB_0041ee60
    PUSH 0x579914                       ; 0041ee4c | = "useEvent"
    LEA EAX,[EBX + 0x5f8]               ; 0041ee51
    PUSH EAX                            ; 0041ee57
    CALL FUN_0040c6d0                   ; 0041ee58
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 0041ee5d
    CMP dword ptr [0x005ad09c],0xd      ; 0041ee60 | DAT_005ad09c
        ;   Label: LAB_0041ee60
    JL 0x0041ee7d                       ; 0041ee67
        ;   XREF to: 0041ee7d (CONDITIONAL_JUMP)  ; LAB_0041ee7d
    PUSH 0x57991d                       ; 0041ee69 | = "allowedMeleeAttackTypes"
    LEA EAX,[EBX + 0x65c]               ; 0041ee6e
    PUSH EAX                            ; 0041ee74
    CALL FUN_0040c900                   ; 0041ee75
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 0041ee7a
    CMP dword ptr [0x005ad09c],0xe      ; 0041ee7d | DAT_005ad09c
        ;   Label: LAB_0041ee7d
    JL 0x0041ee9a                       ; 0041ee84
        ;   XREF to: 0041ee9a (CONDITIONAL_JUMP)  ; LAB_0041ee9a
    PUSH 0x579935                       ; 0041ee86 | = "pushSound"
    LEA EAX,[EBX + 0x324]               ; 0041ee8b
    PUSH EAX                            ; 0041ee91
    CALL FUN_0040c6d0                   ; 0041ee92
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 0041ee97
    CMP dword ptr [0x005ad09c],0xf      ; 0041ee9a | DAT_005ad09c
        ;   Label: LAB_0041ee9a
    JGE 0x0041ef13                      ; 0041eea1
        ;   XREF to: 0041ef13 (CONDITIONAL_JUMP)  ; LAB_0041ef13
    ADD ESP,0x104                       ; 0041eea3
    POP ESI                             ; 0041eea9
    POP EBX                             ; 0041eeaa
    RET                                 ; 0041eeab
    PUSH 0x57985f                       ; 0041eeac | = "canBeCarried"
        ;   Label: LAB_0041eeac
    LEA EAX,[ESP + 0x104]               ; 0041eeb1
    PUSH EAX                            ; 0041eeb8
    CALL FUN_0040c900                   ; 0041eeb9
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 0041eebe
    MOV ECX,dword ptr [ESP + 0x100]     ; 0041eec1
    TEST ECX,ECX                        ; 0041eec8
    JZ 0x0041eedb                       ; 0041eeca
        ;   XREF to: 0041eedb (CONDITIONAL_JUMP)  ; LAB_0041eedb
    MOV dword ptr [EBX + 0x30c],0x3     ; 0041eecc
    JMP 0x0041ed13                      ; 0041eed6
        ;   XREF to: 0041ed13 (UNCONDITIONAL_JUMP)  ; LAB_0041ed13
    MOV dword ptr [EBX + 0x30c],ECX     ; 0041eedb
        ;   Label: LAB_0041eedb
    JMP 0x0041ed13                      ; 0041eee1
        ;   XREF to: 0041ed13 (UNCONDITIONAL_JUMP)  ; LAB_0041ed13
    MOV dword ptr [EBX + 0x5e0],0xffffffff ; 0041eee6
        ;   Label: LAB_0041eee6
    JMP 0x0041ed98                      ; 0041eef0
        ;   XREF to: 0041ed98 (UNCONDITIONAL_JUMP)  ; LAB_0041ed98
    MOV dword ptr [EBX + 0x5ec],0x1     ; 0041eef5
        ;   Label: LAB_0041eef5
    JMP 0x0041edb9                      ; 0041eeff
        ;   XREF to: 0041edb9 (UNCONDITIONAL_JUMP)  ; LAB_0041edb9
    MOV dword ptr [EBX + 0x5f0],0x1     ; 0041ef04
        ;   Label: LAB_0041ef04
    JMP 0x0041edda                      ; 0041ef0e
        ;   XREF to: 0041edda (UNCONDITIONAL_JUMP)  ; LAB_0041edda
    PUSH 0x57993f                       ; 0041ef13 | = "blockVirtualDirectorFlag"
        ;   Label: LAB_0041ef13
    ADD EBX,0x660                       ; 0041ef18
    PUSH EBX                            ; 0041ef1e
    CALL FUN_0040c900                   ; 0041ef1f
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 0041ef24
    ADD ESP,0x104                       ; 0041ef27
    POP ESI                             ; 0041ef2d
    POP EBX                             ; 0041ef2e
    RET                                 ; 0041ef2f

