; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_edittool_cpp_CInputString_init_FUN_0049d3d0(CInputString *this_ptr,char *source_string,int max_length,int param4,int param5,int render_mode)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   source_string
; int              Stack[0xc]:4   max_length
; int              Stack[0x10]:4   param4
; int              Stack[0x14]:4   param5
; int              Stack[0x18]:4   render_mode
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 at 0049fc2a
;   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 at 0049db78
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   crt_string.c__strncpy_FUN_00600f40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d3d0
        ;   Label: shape_edittool.cpp_CInputString_init_FUN_0049d3d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049d3d1
    MOV ECX,dword ptr [ESP + 0x10]      ; 0049d3d5
    MOV dword ptr [EBX + 0x12c],ECX     ; 0049d3d9
    CMP ECX,0x12c                       ; 0049d3df
    JC 0x0049d3f1                       ; 0049d3e5
        ;   XREF to: 0049d3f1 (CONDITIONAL_JUMP)  ; LAB_0049d3f1
    MOV dword ptr [EBX + 0x12c],0x12b   ; 0049d3e7
    PUSH 0x12c                          ; 0049d3f1
        ;   Label: LAB_0049d3f1
    PUSH 0x0                            ; 0049d3f6
    PUSH EBX                            ; 0049d3f8
    CALL crt_memory.c_memset_FUN_005fde40 ; 0049d3f9
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0049d3fe
    MOV ECX,dword ptr [ESP + 0xc]       ; 0049d401
    TEST ECX,ECX                        ; 0049d405
    JNZ 0x0049d431                      ; 0049d407
        ;   XREF to: 0049d431 (CONDITIONAL_JUMP)  ; LAB_0049d431
    MOV dword ptr [EBX + 0x130],ECX     ; 0049d409
    MOV ECX,dword ptr [EBX + 0x130]     ; 0049d40f
        ;   Label: LAB_0049d40f
    MOV dword ptr [EBX + 0x138],0x0     ; 0049d415
    MOV dword ptr [EBX + 0x134],ECX     ; 0049d41f
    MOV ECX,dword ptr [ESP + 0x14]      ; 0049d425
    MOV dword ptr [EBX + 0x13c],ECX     ; 0049d429
    POP EBX                             ; 0049d42f
    RET                                 ; 0049d430
    PUSH EDI                            ; 0049d431
        ;   Label: LAB_0049d431
    PUSH ESI                            ; 0049d432
    MOV ESI,dword ptr [EBX + 0x12c]     ; 0049d433
    PUSH ESI                            ; 0049d439
    PUSH ECX                            ; 0049d43a
    PUSH EBX                            ; 0049d43b
    CALL crt_string.c__strncpy_FUN_00600f40 ; 0049d43c
        ;   XREF to: 00600f40 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_00600f40(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 0049d441
    MOV EDI,EBX                         ; 0049d444
    SUB ECX,ECX                         ; 0049d446
    DEC ECX                             ; 0049d448
    XOR EAX,EAX                         ; 0049d449
    SCASB.REPNE ES:EDI                  ; 0049d44b
    NOT ECX                             ; 0049d44d
    DEC ECX                             ; 0049d44f
    MOV dword ptr [EBX + 0x130],ECX     ; 0049d450
    POP ESI                             ; 0049d456
    POP EDI                             ; 0049d457
    JMP 0x0049d40f                      ; 0049d458
        ;   XREF to: 0049d40f (UNCONDITIONAL_JUMP)  ; LAB_0049d40f

