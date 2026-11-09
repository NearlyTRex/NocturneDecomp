; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_dosio_cpp_getFullPath_FUN_00461210(char *output_path,char *input_path)
;
; Parameters:
; char *           Stack[0x4]:4   output_path
; char *           Stack[0x8]:4   input_path
;
; XREF[2]:
;   engine_dosio.cpp_findFileNormally_FUN_004609e0 at 00460a07
;   shape_edittool.cpp_FUN_00481e20 at 00481fa0
;
; Called Functions:
;   crt_stdlib.c__fullpath_FUN_005ba120
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00461210
        ;   Label: engine_dosio.cpp_getFullPath_FUN_00461210
    PUSH EDI                            ; 00461211
    MOV EDI,dword ptr [ESP + 0xc]       ; 00461212
    MOV ESI,dword ptr [ESP + 0x10]      ; 00461216
    PUSH 0x100                          ; 0046121a
    PUSH ESI                            ; 0046121f
    PUSH EDI                            ; 00461220
    CALL crt_stdlib.c__fullpath_FUN_005ba120 ; 00461221
        ;   XREF to: 005ba120 (UNCONDITIONAL_CALL)  ; char * crt_stdlib.c__fullpath_FUN_005ba120(char * buffer, char * path, SIZE_T buffer_size)
    ADD ESP,0xc                         ; 00461226
    CMP EAX,EDI                         ; 00461229
    JNZ 0x00461235                      ; 0046122b
        ;   XREF to: 00461235 (CONDITIONAL_JUMP)  ; LAB_00461235
    MOV EAX,0x1                         ; 0046122d
    POP EDI                             ; 00461232
    POP ESI                             ; 00461233
    RET                                 ; 00461234
    PUSH EDI                            ; 00461235
        ;   Label: LAB_00461235
    MOV AL,byte ptr [ESI]               ; 00461236
        ;   Label: LAB_00461236
    MOV byte ptr [EDI],AL               ; 00461238
    CMP AL,0x0                          ; 0046123a
    JZ 0x0046124e                       ; 0046123c
        ;   XREF to: 0046124e (CONDITIONAL_JUMP)  ; LAB_0046124e
    MOV AL,byte ptr [ESI + 0x1]         ; 0046123e
    ADD ESI,0x2                         ; 00461241
    MOV byte ptr [EDI + 0x1],AL         ; 00461244
    ADD EDI,0x2                         ; 00461247
    CMP AL,0x0                          ; 0046124a
    JNZ 0x00461236                      ; 0046124c
        ;   XREF to: 00461236 (CONDITIONAL_JUMP)  ; LAB_00461236
    POP EDI                             ; 0046124e
        ;   Label: LAB_0046124e
    XOR EAX,EAX                         ; 0046124f
    POP EDI                             ; 00461251
    POP ESI                             ; 00461252
    RET                                 ; 00461253

