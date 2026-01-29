; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setutil_cpp_readAndParseLine_FUN_00585290 (_FILE *file_handle,char *output_buffer,int max_length)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_handle
; char *           Stack[0x8]:4   output_buffer
; int              Stack[0xc]:4   max_length
; Local Variables:
; undefined        Stack[-0x108]:1  local_108
; undefined1       Stack[-0x107]:1  local_107
;
; Called Functions:
;   crt_stdio.c_fgets_FUN_005fefd0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00585290
        ;   Label: core_setutil.cpp_readAndParseLine_FUN_00585290
    PUSH EDI                            ; 00585291
    SUB ESP,0x100                       ; 00585292
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00585298
    PUSH EDX                            ; 0058529f
    PUSH 0xff                           ; 005852a0
    LEA ECX,[ESP + 0x8]                 ; 005852a5
    PUSH ECX                            ; 005852a9
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 005852aa
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 005852af
    MOV EDI,ESP                         ; 005852b2
    SUB ECX,ECX                         ; 005852b4
    DEC ECX                             ; 005852b6
    XOR EAX,EAX                         ; 005852b7
    SCASB.REPNE ES:EDI                  ; 005852b9
    NOT ECX                             ; 005852bb
    DEC ECX                             ; 005852bd
    TEST ECX,ECX                        ; 005852be
    JLE 0x005852c8                      ; 005852c0
        ;   XREF to: 005852c8 (CONDITIONAL_JUMP)  ; LAB_005852c8
    XOR AH,AH                           ; 005852c2
    MOV byte ptr [ESP + ECX*0x1 + -0x1],AH ; 005852c4
    MOV EDI,ESP                         ; 005852c8
        ;   Label: LAB_005852c8
    MOV ESI,ESP                         ; 005852ca
    SUB ECX,ECX                         ; 005852cc
    DEC ECX                             ; 005852ce
    XOR EAX,EAX                         ; 005852cf
    SCASB.REPNE ES:EDI                  ; 005852d1
    NOT ECX                             ; 005852d3
    DEC ECX                             ; 005852d5
    MOV ECX,dword ptr [ESP + 0x114]     ; 005852d6
    XOR DL,DL                           ; 005852dd
    MOV EDI,dword ptr [ESP + 0x110]     ; 005852df
    MOV byte ptr [ESP + ECX*0x1],DL     ; 005852e6
    PUSH EDI                            ; 005852e9
    MOV AL,byte ptr [ESI]               ; 005852ea
        ;   Label: LAB_005852ea
    MOV byte ptr [EDI],AL               ; 005852ec
    CMP AL,0x0                          ; 005852ee
    JZ 0x00585302                       ; 005852f0
        ;   XREF to: 00585302 (CONDITIONAL_JUMP)  ; LAB_00585302
    MOV AL,byte ptr [ESI + 0x1]         ; 005852f2
    ADD ESI,0x2                         ; 005852f5
    MOV byte ptr [EDI + 0x1],AL         ; 005852f8
    ADD EDI,0x2                         ; 005852fb
    CMP AL,0x0                          ; 005852fe
    JNZ 0x005852ea                      ; 00585300
        ;   XREF to: 005852ea (CONDITIONAL_JUMP)  ; LAB_005852ea
    POP EDI                             ; 00585302
        ;   Label: LAB_00585302
    ADD ESP,0x100                       ; 00585303
    POP EDI                             ; 00585309
    POP ESI                             ; 0058530a
    RET                                 ; 0058530b

