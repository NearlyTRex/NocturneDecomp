; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_event_cpp_skipWhitespaceIndexed_FUN_004a1260(char *expression,int *parse_position)
;
; Parameters:
; char *           Stack[0x4]:4   expression
; int *            Stack[0x8]:4   parse_position
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004a1260
        ;   Label: core_event.cpp_skipWhitespaceIndexed_FUN_004a1260
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a1264
    MOV EDX,dword ptr [EAX]             ; 004a1268
        ;   Label: LAB_004a1268
    MOV DL,byte ptr [ECX + EDX*0x1]     ; 004a126a
    INC DL                              ; 004a126d
    AND EDX,0xff                        ; 004a126f
    TEST byte ptr [EDX + 0x626114],0x2  ; 004a1275
    JZ 0x004a1239                       ; 004a127c
        ;   XREF to: 004a1239 (CONDITIONAL_JUMP)  ; LAB_004a1239
    INC dword ptr [EAX]                 ; 004a127e
    JMP 0x004a1268                      ; 004a1280
        ;   XREF to: 004a1268 (UNCONDITIONAL_JUMP)  ; LAB_004a1268

