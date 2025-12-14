; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_lever.cpp_FUN_00505390()
;
;
; Referenced Globals:
;   TerminatedCString s_A_lever_will_strobe_the__0063123f
;   TerminatedCString s_Likewise_the_off_event_w_00631289
;   TerminatedCString s_If_the_momentary_flag_is_006312db
;   TerminatedCString s_as_long_as_the_lever_is__0063132b
;   TerminatedCString s_Linked_levers_behave_as__0063135d
;   TerminatedCString s_All_linked_levers_always_0063139e
;   TerminatedCString s_to_change_in_a_network_o_006313dd
;   TerminatedCString s_all_levers_in_the_group_0063141d
;
; Called Functions:
;   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
;   core_actor.cpp_drawTextLine_FUN_0040d240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505390
        ;   Label: core_lever.cpp_FUN_00505390
    PUSH ESI                            ; 00505391
    PUSH EDI                            ; 00505392
    MOV EBX,dword ptr [ESP + 0x14]      ; 00505393
    PUSH EBX                            ; 00505397
    MOV EDX,dword ptr [ESP + 0x14]      ; 00505398
    PUSH EDX                            ; 0050539c
    CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150 ; 0050539d
        ;   XREF to: 0040d150 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor * this_ptr, int * y_pos)
    ADD ESP,0x8                         ; 005053a2
    MOV ECX,dword ptr [EBX]             ; 005053a5
    PUSH 0x63123f                       ; 005053a7 | = "A lever will strobe the on event when..."
    ADD ECX,0xb                         ; 005053ac
    PUSH EBX                            ; 005053af
    MOV dword ptr [EBX],ECX             ; 005053b0
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005053b2
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005053b7
    PUSH 0x631289                       ; 005053ba | = "Likewise, the off event will be strob..."
    PUSH EBX                            ; 005053bf
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005053c0
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005053c5
    MOV ESI,dword ptr [EBX]             ; 005053c8
    PUSH 0x6312db                       ; 005053ca | = "If the momentary flag is TRUE, then t..."
    ADD ESI,0xb                         ; 005053cf
    PUSH EBX                            ; 005053d2
    MOV dword ptr [EBX],ESI             ; 005053d3
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005053d5
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005053da
    PUSH 0x63132b                       ; 005053dd | = "as long as the lever is in the approp..."
    PUSH EBX                            ; 005053e2
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005053e3
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005053e8
    MOV EDI,dword ptr [EBX]             ; 005053eb
    PUSH 0x63135d                       ; 005053ed | = "Linked levers behave as one.  There i..."
    ADD EDI,0xb                         ; 005053f2
    PUSH EBX                            ; 005053f5
    MOV dword ptr [EBX],EDI             ; 005053f6
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005053f8
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005053fd
    PUSH 0x63139e                       ; 00505400 | = "All linked levers always have the sam..."
    PUSH EBX                            ; 00505405
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 00505406
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 0050540b
    PUSH 0x6313dd                       ; 0050540e | = "to change in a network of linked leve..."
    PUSH EBX                            ; 00505413
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 00505414
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 00505419
    PUSH 0x63141d                       ; 0050541c | = "all levers in the group."
    PUSH EBX                            ; 00505421
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 00505422
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 00505427
    POP EDI                             ; 0050542a
    POP ESI                             ; 0050542b
    POP EBX                             ; 0050542c
    RET                                 ; 0050542d

