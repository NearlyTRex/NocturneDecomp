; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * __cdecl shape_edittool_cpp_extractTabDelimitedField_FUN_0049d250(char *source_str,char *dest_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   source_str
; char *           Stack[0x8]:4   dest_buffer
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d250
        ;   Label: shape_edittool.cpp_extractTabDelimitedField_FUN_0049d250
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049d251
    MOV DL,byte ptr [EAX]               ; 0049d255
    MOV ECX,dword ptr [ESP + 0xc]       ; 0049d257
    TEST DL,DL                          ; 0049d25b
    JZ 0x0049d276                       ; 0049d25d
        ;   XREF to: 0049d276 (CONDITIONAL_JUMP)  ; LAB_0049d276
    MOV BH,byte ptr [EAX]               ; 0049d25f
        ;   Label: LAB_0049d25f
    LEA EDX,[EAX + 0x1]                 ; 0049d261
    CMP BH,0x9                          ; 0049d264
    JZ 0x0049d27b                       ; 0049d267
        ;   XREF to: 0049d27b (CONDITIONAL_JUMP)  ; LAB_0049d27b
    MOV AL,byte ptr [EAX]               ; 0049d269
    MOV byte ptr [ECX],AL               ; 0049d26b
    INC ECX                             ; 0049d26d
    MOV BL,byte ptr [EDX]               ; 0049d26e
    MOV EAX,EDX                         ; 0049d270
    TEST BL,BL                          ; 0049d272
    JNZ 0x0049d25f                      ; 0049d274
        ;   XREF to: 0049d25f (CONDITIONAL_JUMP)  ; LAB_0049d25f
    MOV byte ptr [ECX],0x0              ; 0049d276
        ;   Label: LAB_0049d276
    POP EBX                             ; 0049d279
    RET                                 ; 0049d27a
    MOV EAX,EDX                         ; 0049d27b
        ;   Label: LAB_0049d27b
    MOV byte ptr [ECX],0x0              ; 0049d27d
    POP EBX                             ; 0049d280
    RET                                 ; 0049d281

