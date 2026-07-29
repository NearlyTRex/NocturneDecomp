; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl shape_edittool_cpp_extractTabDelimitedField_FUN_0046f060(char *source_str,char *dest_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   source_str
; char *           Stack[0x8]:4   dest_buffer
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f060
        ;   Label: shape_edittool.cpp_extractTabDelimitedField_FUN_0046f060
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046f061
    MOV DL,byte ptr [EAX]               ; 0046f065
    MOV ECX,dword ptr [ESP + 0xc]       ; 0046f067
    TEST DL,DL                          ; 0046f06b
    JZ 0x0046f086                       ; 0046f06d
        ;   XREF to: 0046f086 (CONDITIONAL_JUMP)  ; LAB_0046f086
    MOV BH,byte ptr [EAX]               ; 0046f06f
        ;   Label: LAB_0046f06f
    LEA EDX,[EAX + 0x1]                 ; 0046f071
    CMP BH,0x9                          ; 0046f074
    JZ 0x0046f08b                       ; 0046f077
        ;   XREF to: 0046f08b (CONDITIONAL_JUMP)  ; LAB_0046f08b
    MOV AL,byte ptr [EAX]               ; 0046f079
    MOV byte ptr [ECX],AL               ; 0046f07b
    INC ECX                             ; 0046f07d
    MOV BL,byte ptr [EDX]               ; 0046f07e
    MOV EAX,EDX                         ; 0046f080
    TEST BL,BL                          ; 0046f082
    JNZ 0x0046f06f                      ; 0046f084
        ;   XREF to: 0046f06f (CONDITIONAL_JUMP)  ; LAB_0046f06f
    MOV byte ptr [ECX],0x0              ; 0046f086
        ;   Label: LAB_0046f086
    POP EBX                             ; 0046f089
    RET                                 ; 0046f08a
    MOV EAX,EDX                         ; 0046f08b
        ;   Label: LAB_0046f08b
    MOV byte ptr [ECX],0x0              ; 0046f08d
    POP EBX                             ; 0046f090
    RET                                 ; 0046f091

