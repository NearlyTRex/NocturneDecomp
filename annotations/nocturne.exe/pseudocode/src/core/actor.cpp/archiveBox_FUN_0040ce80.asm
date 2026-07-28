; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveBox_FUN_0040ce80(CBox *box_ptr,char *property_name)
;
; Parameters:
; CBox *           Stack[0x4]:4   box_ptr
; char *           Stack[0x8]:4   property_name
;
; XREF[2]:
;   core_bodypart.cpp_CBodyPart_archive_FUN_00416570 at 004166f5
;   core_boxactor.cpp_CBoxActor_archive_FUN_0041ec60 at 0041ed90
;
; Referenced Globals:
;   TerminatedCString s_sim_box_state_info_openi_00577d87
;   TerminatedCString s_sim_box_state_info_closi_00577da8
;   TerminatedCString s_s_s_00577dc9
;   TerminatedCString s_s_00577dd4
;   undefined1 DAT_005acc90
;   undefined4 DAT_00763e84
;   undefined4 DAT_00763e88
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040bff0
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040c320
;   core_box.cpp_CBox_loadFromFile_FUN_0041c850
;   core_box.cpp_CBox_saveToFile_FUN_0041c9e0
;   crt_stdio.c_fgetc_FUN_00564570
;   crt_stdio.c_fprintf_FUN_005644f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ce80
        ;   Label: core_actor.cpp_archiveBox_FUN_0040ce80
    PUSH ESI                            ; 0040ce81
    PUSH EBP                            ; 0040ce82
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040ce83
    CMP dword ptr [0x00763e88],0x1      ; 0040ce87 | DAT_00763e88
    JNZ 0x0040cf06                      ; 0040ce8e
        ;   XREF to: 0040cf06 (CONDITIONAL_JUMP)  ; LAB_0040cf06
    MOV EBP,dword ptr [0x00763e84]      ; 0040ce94 | DAT_00763e84
        ;   Label: LAB_0040ce94
    PUSH EBP                            ; 0040ce9a
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0040ce9b
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_00564570(_FILE * file)
    ADD ESP,0x4                         ; 0040cea0
    MOV ESI,EAX                         ; 0040cea3
    TEST EAX,EAX                        ; 0040cea5
    JL 0x0040cedf                       ; 0040cea7
        ;   XREF to: 0040cedf (CONDITIONAL_JUMP)  ; LAB_0040cedf
    CMP ESI,0xa                         ; 0040cea9
        ;   Label: LAB_0040cea9
    JNZ 0x0040ce94                      ; 0040ceac
        ;   XREF to: 0040ce94 (CONDITIONAL_JUMP)  ; LAB_0040ce94
    MOV EAX,[0x00763e84]                ; 0040ceae | DAT_00763e84
    PUSH EAX                            ; 0040ceb3
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040ceb4
    PUSH EDX                            ; 0040ceb8
    CALL core_box.cpp_CBox_loadFromFile_FUN_0041c850 ; 0040ceb9
        ;   XREF to: 0041c850 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_loadFromFile_FUN_0041c850(CBox * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0040cebe
    MOV ECX,dword ptr [0x00763e84]      ; 0040cec1 | DAT_00763e84
        ;   Label: LAB_0040cec1
    PUSH ECX                            ; 0040cec7
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0040cec8
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_00564570(_FILE * file)
    ADD ESP,0x4                         ; 0040cecd
    MOV ESI,EAX                         ; 0040ced0
    TEST EAX,EAX                        ; 0040ced2
    JL 0x0040ceef                       ; 0040ced4
        ;   XREF to: 0040ceef (CONDITIONAL_JUMP)  ; LAB_0040ceef
    CMP ESI,0xa                         ; 0040ced6
    JNZ 0x0040cec1                      ; 0040ced9
        ;   XREF to: 0040cec1 (CONDITIONAL_JUMP)  ; LAB_0040cec1
    POP EBP                             ; 0040cedb
    POP ESI                             ; 0040cedc
    POP EBX                             ; 0040cedd
    RET                                 ; 0040cede
    PUSH EBX                            ; 0040cedf
        ;   Label: LAB_0040cedf
    PUSH 0x577d87                       ; 0040cee0 | = "sim box state info opening brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 ; 0040cee5
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040c320(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040ceea
    JMP 0x0040cea9                      ; 0040ceed
        ;   XREF to: 0040cea9 (UNCONDITIONAL_JUMP)  ; LAB_0040cea9
    PUSH EBX                            ; 0040ceef
        ;   Label: LAB_0040ceef
    PUSH 0x577da8                       ; 0040cef0 | = "sim box state info closing brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040c320 ; 0040cef5
        ;   XREF to: 0040c320 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040c320(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040cefa
    CMP ESI,0xa                         ; 0040cefd
    JNZ 0x0040cec1                      ; 0040cf00
        ;   XREF to: 0040cec1 (CONDITIONAL_JUMP)  ; LAB_0040cec1
    POP EBP                             ; 0040cf02
    POP ESI                             ; 0040cf03
    POP EBX                             ; 0040cf04
    RET                                 ; 0040cf05
    PUSH EDI                            ; 0040cf06
        ;   Label: LAB_0040cf06
    PUSH EBX                            ; 0040cf07
    PUSH 0x5acc90                       ; 0040cf08 | DAT_005acc90
    PUSH 0x577dc9                       ; 0040cf0d | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x00763e84]      ; 0040cf12 | DAT_00763e84
    PUSH ECX                            ; 0040cf18
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0040cf19
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x10                        ; 0040cf1e
    PUSH 0x1                            ; 0040cf21
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040bff0 ; 0040cf23
        ;   XREF to: 0040bff0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040bff0(int indent_delta)
    ADD ESP,0x4                         ; 0040cf28
    PUSH 0x5acc90                       ; 0040cf2b | DAT_005acc90
    MOV EBX,dword ptr [0x00763e84]      ; 0040cf30 | DAT_00763e84
    PUSH EBX                            ; 0040cf36
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040cf37
    PUSH ESI                            ; 0040cf3b
    CALL core_box.cpp_CBox_saveToFile_FUN_0041c9e0 ; 0040cf3c
        ;   XREF to: 0041c9e0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_saveToFile_FUN_0041c9e0(CBox * this_ptr, _FILE * file_handle, char * indent_prefix)
    ADD ESP,0xc                         ; 0040cf41
    PUSH -0x1                           ; 0040cf44
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040bff0 ; 0040cf46
        ;   XREF to: 0040bff0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040bff0(int indent_delta)
    ADD ESP,0x4                         ; 0040cf4b
    PUSH 0x5acc90                       ; 0040cf4e | DAT_005acc90
    PUSH 0x577dd4                       ; 0040cf53 | = "%s}\n"
    MOV EDI,dword ptr [0x00763e84]      ; 0040cf58 | DAT_00763e84
    PUSH EDI                            ; 0040cf5e
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0040cf5f
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0xc                         ; 0040cf64
    POP EDI                             ; 0040cf67
    POP EBP                             ; 0040cf68
    POP ESI                             ; 0040cf69
    POP EBX                             ; 0040cf6a
    RET                                 ; 0040cf6b

