; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00576200(CDemonSet * this_ptr, FILE * file_handle)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
; Local Variables:
; undefined1       Stack[-0x118]:1  local_118
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_load_FUN_00569410 at 00569a7c
;
; Referenced Globals:
;   TerminatedCString s_d_0064658b
;   TerminatedCString s_d_0064658f
;
; Called Functions:
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576200
        ;   Label: core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00576200
    PUSH ESI                            ; 00576201
    PUSH EDI                            ; 00576202
    PUSH EBP                            ; 00576203
    SUB ESP,0x108                       ; 00576204
    MOV ESI,dword ptr [ESP + 0x120]     ; 0057620a
    PUSH ESI                            ; 00576211
    PUSH 0xff                           ; 00576212
    LEA EAX,[ESP + 0x8]                 ; 00576217
    PUSH EAX                            ; 0057621b
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0057621c | char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00576221
    LEA EAX,[ESP + 0x100]               ; 00576224
    PUSH EAX                            ; 0057622b
    PUSH 0x64658b                       ; 0057622c | = "%d\n" | s_d_0064658b = %d

    PUSH ESI                            ; 00576231
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00576232 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00576237
    MOV EDX,dword ptr [ESP + 0x100]     ; 0057623a
    XOR EDI,EDI                         ; 00576241
    TEST EDX,EDX                        ; 00576243
    JLE 0x00576293                      ; 00576245 | LAB_00576293
        ;   XREF to: 00576293 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x104]               ; 00576247
        ;   Label: LAB_00576247
    PUSH EAX                            ; 0057624e
    PUSH 0x64658f                       ; 0057624f | = "\"%*[^\"]\", %d\n" | s_d_0064658f = "%*[^"]", %d

    PUSH ESI                            ; 00576254
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00576255 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0057625a
    MOV EBP,dword ptr [ESP + 0x104]     ; 0057625d
    XOR EBX,EBX                         ; 00576264
    TEST EBP,EBP                        ; 00576266
    JLE 0x00576287                      ; 00576268 | LAB_00576287
        ;   XREF to: 00576287 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 0057626a
        ;   Label: LAB_0057626a
    PUSH 0xff                           ; 0057626b
    LEA EAX,[ESP + 0x8]                 ; 00576270
    PUSH EAX                            ; 00576274
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00576275 | char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0057627a
    INC EBX                             ; 0057627d
    CMP EBX,dword ptr [ESP + 0x104]     ; 0057627e
    JL 0x0057626a                       ; 00576285 | LAB_0057626a
        ;   XREF to: 0057626a (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x100]     ; 00576287
        ;   Label: LAB_00576287
    INC EDI                             ; 0057628e
    CMP EDI,ECX                         ; 0057628f
    JL 0x00576247                       ; 00576291 | LAB_00576247
        ;   XREF to: 00576247 (CONDITIONAL_JUMP)
    ADD ESP,0x108                       ; 00576293
        ;   Label: LAB_00576293
    POP EBP                             ; 00576299
    POP EDI                             ; 0057629a
    POP ESI                             ; 0057629b
    POP EBX                             ; 0057629c
    RET                                 ; 0057629d

