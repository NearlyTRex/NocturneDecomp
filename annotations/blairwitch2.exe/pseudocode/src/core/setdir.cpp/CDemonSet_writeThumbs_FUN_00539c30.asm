; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CDemonSet_writeThumbs_FUN_00539c30(CDemonSet *this_ptr,char *filename)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setdir.cpp_FUN_00539860 at 00539892
;
; Referenced Globals:
;   undefined4 DAT_005e604d
;   undefined4 DAT_005e6050
;   TerminatedCString s_core_setdir_cpp_005e6055
;   TerminatedCString s_Can_t_create_s_005e6068
;   TerminatedCString s_core_setdir_cpp_005e6078
;   TerminatedCString s_Error_writing_s_005e608b
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_setdir.cpp_CZThumb_write_FUN_00538670
;   crt_stdio.c_fclose_FUN_005b89c0
;   engine_dosio.cpp_FUN_00460c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00539c30
        ;   Label: core_setdir.cpp_CDemonSet_writeThumbs_FUN_00539c30
    PUSH ESI                            ; 00539c31
    PUSH EDI                            ; 00539c32
    PUSH EBP                            ; 00539c33
    SUB ESP,0xc                         ; 00539c34
    PUSH 0x5e604d                       ; 00539c37 | DAT_005e604d
    MOV EDX,dword ptr [ESP + 0x28]      ; 00539c3c
    PUSH EDX                            ; 00539c40
    PUSH 0x5e6050                       ; 00539c41 | DAT_005e6050
    CALL engine_dosio.cpp_FUN_00460c70  ; 00539c46
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00539c4b
    MOV EBP,EAX                         ; 00539c4e
    TEST EAX,EAX                        ; 00539c50
    JZ 0x00539ceb                       ; 00539c52
        ;   XREF to: 00539ceb (CONDITIONAL_JUMP)  ; LAB_00539ceb
    MOV EAX,dword ptr [ESP + 0x20]      ; 00539c58
        ;   Label: LAB_00539c58
    XOR EDI,EDI                         ; 00539c5c
    MOV EDX,dword ptr [EAX]             ; 00539c5e
    MOV dword ptr [ESP + 0x8],EDI       ; 00539c60
    TEST EDX,EDX                        ; 00539c64
    JLE 0x00539cd4                      ; 00539c66
        ;   XREF to: 00539cd4 (CONDITIONAL_JUMP)  ; LAB_00539cd4
    MOV EBX,0x2093d34                   ; 00539c68
    MOV dword ptr [ESP + 0x4],EAX       ; 00539c6d
    MOV dword ptr [ESP],EBX             ; 00539c71
    MOV EAX,dword ptr [ESP + 0x4]       ; 00539c74
        ;   Label: LAB_00539c74
    MOV ESI,dword ptr [EAX + 0x144]     ; 00539c78
    MOV EDI,0x1                         ; 00539c7e
    TEST ESI,ESI                        ; 00539c83
    JZ 0x00539c8c                       ; 00539c85
        ;   XREF to: 00539c8c (CONDITIONAL_JUMP)  ; LAB_00539c8c
    MOV EDI,0x6                         ; 00539c87
    XOR ESI,ESI                         ; 00539c8c
        ;   Label: LAB_00539c8c
    TEST EDI,EDI                        ; 00539c8e
    JLE 0x00539ca7                      ; 00539c90
        ;   XREF to: 00539ca7 (CONDITIONAL_JUMP)  ; LAB_00539ca7
    MOV EBX,dword ptr [ESP]             ; 00539c92
    PUSH EBP                            ; 00539c95
        ;   Label: LAB_00539c95
    PUSH EBX                            ; 00539c96
    INC ESI                             ; 00539c97
    CALL core_setdir.cpp_CZThumb_write_FUN_00538670 ; 00539c98
        ;   XREF to: 00538670 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_write_FUN_00538670(CZThumb * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00539c9d
    ADD EBX,0x28                        ; 00539ca0
    CMP ESI,EDI                         ; 00539ca3
    JL 0x00539c95                       ; 00539ca5
        ;   XREF to: 00539c95 (CONDITIONAL_JUMP)  ; LAB_00539c95
    MOV ECX,dword ptr [ESP + 0x4]       ; 00539ca7
        ;   Label: LAB_00539ca7
    MOV EBX,dword ptr [ESP]             ; 00539cab
    MOV ESI,dword ptr [ESP + 0x8]       ; 00539cae
    ADD EBX,0xf0                        ; 00539cb2
    ADD ECX,0x1a4                       ; 00539cb8
    MOV dword ptr [ESP],EBX             ; 00539cbe
    MOV EBX,dword ptr [ESP + 0x20]      ; 00539cc1
    INC ESI                             ; 00539cc5
    MOV dword ptr [ESP + 0x4],ECX       ; 00539cc6
    MOV EDI,dword ptr [EBX]             ; 00539cca
    MOV dword ptr [ESP + 0x8],ESI       ; 00539ccc
    CMP ESI,EDI                         ; 00539cd0
    JL 0x00539c74                       ; 00539cd2
        ;   XREF to: 00539c74 (CONDITIONAL_JUMP)  ; LAB_00539c74
    TEST byte ptr [EBP + 0xc],0x20      ; 00539cd4
        ;   Label: LAB_00539cd4
    JNZ 0x00539d18                      ; 00539cd8
        ;   XREF to: 00539d18 (CONDITIONAL_JUMP)  ; LAB_00539d18
    PUSH EBP                            ; 00539cda
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 00539cdb
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 00539ce0
    ADD ESP,0xc                         ; 00539ce3
    POP EBP                             ; 00539ce6
    POP EDI                             ; 00539ce7
    POP ESI                             ; 00539ce8
    POP EBX                             ; 00539ce9
    RET                                 ; 00539cea
    MOV ESI,dword ptr [ESP + 0x24]      ; 00539ceb
        ;   Label: LAB_00539ceb
    PUSH ESI                            ; 00539cef
    MOV ECX,0x5e6055                    ; 00539cf0 | = "..\\core\\setdir.cpp"
    MOV EBX,0x3cc                       ; 00539cf5
    PUSH 0x5e6068                       ; 00539cfa | = "Can't create %s"
    MOV dword ptr [0x01d046a0],ECX      ; 00539cff | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00539d05 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00539d0b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00539d10
    JMP 0x00539c58                      ; 00539d13
        ;   XREF to: 00539c58 (UNCONDITIONAL_JUMP)  ; LAB_00539c58
    MOV ECX,dword ptr [ESP + 0x24]      ; 00539d18
        ;   Label: LAB_00539d18
    PUSH ECX                            ; 00539d1c
    MOV EAX,0x5e6078                    ; 00539d1d | = "..\\core\\setdir.cpp"
    MOV EDX,0x3d7                       ; 00539d22
    PUSH 0x5e608b                       ; 00539d27 | = "Error writing %s"
    MOV [0x01d046a0],EAX                ; 00539d2c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00539d31 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00539d37
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00539d3c
    PUSH EBP                            ; 00539d3f
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 00539d40
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 00539d45
    ADD ESP,0xc                         ; 00539d48
    POP EBP                             ; 00539d4b
    POP EDI                             ; 00539d4c
    POP ESI                             ; 00539d4d
    POP EBX                             ; 00539d4e
    RET                                 ; 00539d4f

