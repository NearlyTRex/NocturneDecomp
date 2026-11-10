; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_save_FUN_0040b0a0(CDemonActor *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_inv.cpp_CInventory_save_FUN_004dc2c0 at 004dc40a
;   core_mission.cpp_CDemonMission_writeFile_FUN_004fbce0 at 004fbfc1
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005ca89e
;   TerminatedCString s_CDemonActor_save_tried_t_005ca8b0
;   TerminatedCString s_s_s_s_005ca8f1
;   TerminatedCString s_s_s_s_005ca8fe
;   TerminatedCString s_core_actor_cpp_005ca90b
;   TerminatedCString s_IO_Error_after_writing_a_005ca91d
;   undefined1 DAT_00609590
;   undefined4 DAT_007bc034
;   undefined4 DAT_007bc038
;   undefined4 DAT_007bc03c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040b050
;   core_actor.cpp_FUN_00408a50
;   core_actor.cpp_syncActorTypeIDs_FUN_0040c920
;   core_main.c_FUN_004e4500
;   crt_unknown.c_FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b0a0
        ;   Label: core_actor.cpp_CDemonActor_save_FUN_0040b0a0
    PUSH ESI                            ; 0040b0a1
    PUSH EDI                            ; 0040b0a2
    PUSH EBP                            ; 0040b0a3
    SUB ESP,0x8                         ; 0040b0a4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0040b0a7
    MOV EDI,dword ptr [ESP + 0x20]      ; 0040b0ab
    CALL core_actor.cpp_syncActorTypeIDs_FUN_0040c920 ; 0040b0af
        ;   XREF to: 0040c920 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_syncActorTypeIDs_FUN_0040c920()
    PUSH EBX                            ; 0040b0b4
    CALL core_actor.cpp_FUN_00408a50    ; 0040b0b5
        ;   XREF to: 00408a50 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408a50()
    ADD ESP,0x4                         ; 0040b0ba
    MOV DL,byte ptr [EBX]               ; 0040b0bd
    MOV ESI,EAX                         ; 0040b0bf
    TEST DL,DL                          ; 0040b0c1
    JNZ 0x0040b0e9                      ; 0040b0c3
        ;   XREF to: 0040b0e9 (CONDITIONAL_JUMP)  ; LAB_0040b0e9
    PUSH EAX                            ; 0040b0c5
    MOV EDX,0x5ca89e                    ; 0040b0c6 | = "..\\core\\actor.cpp"
    MOV ECX,0x7ea                       ; 0040b0cb
    PUSH 0x5ca8b0                       ; 0040b0d0 | = "CDemonActor::save - tried to save act..."
    MOV dword ptr [0x01d046a0],EDX      ; 0040b0d5 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0040b0db | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0040b0e1
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0040b0e6
    PUSH EBX                            ; 0040b0e9
        ;   Label: LAB_0040b0e9
    PUSH ESI                            ; 0040b0ea
    PUSH 0x609590                       ; 0040b0eb | DAT_00609590
    PUSH 0x5ca8f1                       ; 0040b0f0 | = "%s{ %s \"%s\"\n"
    PUSH EDI                            ; 0040b0f5
    CALL crt_unknown.c_FUN_005b8010     ; 0040b0f6
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x14                        ; 0040b0fb
    MOV EAX,[0x007bc034]                ; 0040b0fe | DAT_007bc034
    MOV EBP,dword ptr [0x007bc03c]      ; 0040b103 | DAT_007bc03c
    PUSH 0x1                            ; 0040b109
    MOV dword ptr [ESP + 0x8],EAX       ; 0040b10b
    MOV EAX,[0x007bc038]                ; 0040b10f | DAT_007bc038
    MOV dword ptr [0x007bc034],EDI      ; 0040b114 | DAT_007bc034
    MOV dword ptr [ESP + 0x4],EAX       ; 0040b11a
    MOV EAX,0x2                         ; 0040b11e
    MOV dword ptr [0x007bc03c],EBX      ; 0040b123 | DAT_007bc03c
    MOV [0x007bc038],EAX                ; 0040b129 | DAT_007bc038
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040b050 ; 0040b12e
        ;   XREF to: 0040b050 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040b050(int indent_delta)
    ADD ESP,0x4                         ; 0040b133
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0040b136
    PUSH EBX                            ; 0040b13c
    CALL dword ptr [EAX + 0xdc]         ; 0040b13d
    ADD ESP,0x4                         ; 0040b143
    PUSH -0x1                           ; 0040b146
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040b050 ; 0040b148
        ;   XREF to: 0040b050 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040b050(int indent_delta)
    ADD ESP,0x4                         ; 0040b14d
    PUSH EBX                            ; 0040b150
    PUSH ESI                            ; 0040b151
    PUSH 0x609590                       ; 0040b152 | DAT_00609590
    PUSH 0x5ca8fe                       ; 0040b157 | = "%s} %s \"%s\"\n"
    PUSH EDI                            ; 0040b15c
    CALL crt_unknown.c_FUN_005b8010     ; 0040b15d
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV DH,byte ptr [EDI + 0xc]         ; 0040b162
    ADD ESP,0x14                        ; 0040b165
    TEST DH,0x20                        ; 0040b168
    JNZ 0x0040b18c                      ; 0040b16b
        ;   XREF to: 0040b18c (CONDITIONAL_JUMP)  ; LAB_0040b18c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040b16d
        ;   Label: LAB_0040b16d
    MOV [0x007bc034],EAX                ; 0040b171 | DAT_007bc034
    MOV EAX,dword ptr [ESP]             ; 0040b176
    MOV dword ptr [0x007bc03c],EBP      ; 0040b179 | DAT_007bc03c
    MOV [0x007bc038],EAX                ; 0040b17f | DAT_007bc038
    ADD ESP,0x8                         ; 0040b184
    POP EBP                             ; 0040b187
    POP EDI                             ; 0040b188
    POP ESI                             ; 0040b189
    POP EBX                             ; 0040b18a
    RET                                 ; 0040b18b
    PUSH ESI                            ; 0040b18c
        ;   Label: LAB_0040b18c
    MOV EDX,0x5ca90b                    ; 0040b18d | = "..\\core\\actor.cpp"
    MOV ECX,0x80c                       ; 0040b192
    PUSH 0x5ca91d                       ; 0040b197 | = "IO Error after writing actor of type %s"
    MOV dword ptr [0x01d046a0],EDX      ; 0040b19c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0040b1a2 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0040b1a8
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0040b1ad
    JMP 0x0040b16d                      ; 0040b1b0
        ;   XREF to: 0040b16d (UNCONDITIONAL_JUMP)  ; LAB_0040b16d

