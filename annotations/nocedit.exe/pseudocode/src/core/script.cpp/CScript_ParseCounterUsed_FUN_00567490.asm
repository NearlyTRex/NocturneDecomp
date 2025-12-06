; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_CScript_ParseCounterUsed_FUN_00567490()
;
; Local Variables:
; undefined1       Stack[-0x2134]:1  local_2134
;
; XREF[1]:
;   core_script.cpp_FUN_005671a0 at 00567259
;
; Referenced Globals:
;   TerminatedCString s_cmp_counterUsed_relOp_co_0064546c
;   TerminatedCString s_exists_actor_00645495
;   void* PTR_s_cmp_counterUsed_relOp_co_0064546c_00681008 = 0064546c
;   void* PTR_s_exists_actor_00645495_0068100c = 00645495
;
; Called Functions:
;   core_script.cpp_FUN_00564090
;   core_script.cpp_SCmdParse_parse_FUN_00561fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567490
        ;   Label: core_script.cpp_CScript_ParseCounterUsed_FUN_00567490
    PUSH ESI                            ; 00567491
    PUSH EDI                            ; 00567492
    SUB ESP,0x2128                      ; 00567493
    MOV EDI,dword ptr [ESP + 0x213c]    ; 00567499
    XOR EBX,EBX                         ; 005674a0
    XOR ESI,ESI                         ; 005674a2
    MOV EDX,dword ptr [EBX + 0x681008]  ; 005674a4 | = "cmp(<counterUsed> <relOp> <counterUsed>)" | void * PTR_s_cmp_counterUsed_relOp_co_0064546c_00681008 | s_exists_actor_00645495 = exists(<actor>)
        ;   Label: LAB_005674a4
    PUSH EDX                            ; 005674aa | = "cmp(<counterUsed> <relOp> <counterUsed>)" | s_cmp_counterUsed_relOp_co_0064546c = cmp(<counterUsed> <relOp> <counterUsed>) | s_exists_actor_00645495 = exists(<actor>)
    PUSH EDI                            ; 005674ab
    LEA EAX,[ESP + 0x8]                 ; 005674ac
    PUSH EAX                            ; 005674b0
    CALL core_script.cpp_SCmdParse_parse_FUN_00561fd0 ; 005674b1 | undefined core_script.cpp_SCmdParse_parse_FUN_00561fd0()
        ;   XREF to: 00561fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005674b6
    CMP EAX,0x3                         ; 005674b9
    JNZ 0x005674cd                      ; 005674bc | LAB_005674cd
        ;   XREF to: 005674cd (CONDITIONAL_JUMP)
    CMP ESI,0x78                        ; 005674be
    JL 0x005674e5                       ; 005674c1 | LAB_005674e5
        ;   XREF to: 005674e5 (CONDITIONAL_JUMP)
    ADD ESP,0x2128                      ; 005674c3
    POP EDI                             ; 005674c9
    POP ESI                             ; 005674ca
    POP EBX                             ; 005674cb
    RET                                 ; 005674cc
    ADD EBX,0x4                         ; 005674cd
        ;   Label: LAB_005674cd
    INC ESI                             ; 005674d0
    CMP EBX,0x54                        ; 005674d1
    JL 0x005674a4                       ; 005674d4 | LAB_005674a4
        ;   XREF to: 005674a4 (CONDITIONAL_JUMP)
    CMP ESI,0x78                        ; 005674d6
    JL 0x005674e5                       ; 005674d9 | LAB_005674e5
        ;   XREF to: 005674e5 (CONDITIONAL_JUMP)
    ADD ESP,0x2128                      ; 005674db
    POP EDI                             ; 005674e1
    POP ESI                             ; 005674e2
    POP EBX                             ; 005674e3
    RET                                 ; 005674e4
    MOV ECX,dword ptr [ESP + 0x2140]    ; 005674e5
        ;   Label: LAB_005674e5
    PUSH ECX                            ; 005674ec
    LEA EAX,[ESP + 0x4]                 ; 005674ed
    PUSH EAX                            ; 005674f1
    CALL core_script.cpp_FUN_00564090   ; 005674f2 | undefined core_script.cpp_FUN_00564090()
        ;   XREF to: 00564090 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005674f7
    ADD ESP,0x2128                      ; 005674fa
    POP EDI                             ; 00567500
    POP ESI                             ; 00567501
    POP EBX                             ; 00567502
    RET                                 ; 00567503

