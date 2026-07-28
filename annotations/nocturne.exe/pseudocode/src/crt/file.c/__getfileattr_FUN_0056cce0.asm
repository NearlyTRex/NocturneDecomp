; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; DWORD __cdecl crt_file_c___getfileattr_FUN_0056cce0(char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined4       Stack[-0x148]:4  local_148
;
; XREF[1]:
;   engine_dosio.cpp_setReadonlyAttribute_FUN_00565dd0 at 00565dd6
;
; Referenced Globals:
;   void* PTR_FindFirstFileA_005754cc = 00175bfc
;
; Called Functions:
;   FindFirstFileA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056cce0
        ;   Label: crt_file.c___getfileattr_FUN_0056cce0
    PUSH ESI                            ; 0056cce1
    SUB ESP,0x140                       ; 0056cce2
    MOV EBX,dword ptr [ESP + 0x14c]     ; 0056cce8
    MOV DL,0x2a                         ; 0056ccef
    MOV ESI,EBX                         ; 0056ccf1
    MOV AL,byte ptr [ESI]               ; 0056ccf3
        ;   Label: LAB_0056ccf3
    CMP AL,DL                           ; 0056ccf5
    JZ 0x0056cd0b                       ; 0056ccf7
        ;   XREF to: 0056cd0b (CONDITIONAL_JUMP)  ; LAB_0056cd0b
    CMP AL,0x0                          ; 0056ccf9
    JZ 0x0056cd09                       ; 0056ccfb
        ;   XREF to: 0056cd09 (CONDITIONAL_JUMP)  ; LAB_0056cd09
    INC ESI                             ; 0056ccfd
    MOV AL,byte ptr [ESI]               ; 0056ccfe
    CMP AL,DL                           ; 0056cd00
    JZ 0x0056cd0b                       ; 0056cd02
        ;   XREF to: 0056cd0b (CONDITIONAL_JUMP)  ; LAB_0056cd0b
    INC ESI                             ; 0056cd04
    CMP AL,0x0                          ; 0056cd05
    JNZ 0x0056ccf3                      ; 0056cd07
        ;   XREF to: 0056ccf3 (CONDITIONAL_JUMP)  ; LAB_0056ccf3
    SUB ESI,ESI                         ; 0056cd09
        ;   Label: LAB_0056cd09
    TEST ESI,ESI                        ; 0056cd0b
        ;   Label: LAB_0056cd0b
    JNZ 0x0056cd2f                      ; 0056cd0d
        ;   XREF to: 0056cd2f (CONDITIONAL_JUMP)  ; LAB_0056cd2f
    MOV DL,0x3f                         ; 0056cd0f
    MOV ESI,EBX                         ; 0056cd11
    MOV AL,byte ptr [ESI]               ; 0056cd13
        ;   Label: LAB_0056cd13
    CMP AL,DL                           ; 0056cd15
    JZ 0x0056cd2b                       ; 0056cd17
        ;   XREF to: 0056cd2b (CONDITIONAL_JUMP)  ; LAB_0056cd2b
    CMP AL,0x0                          ; 0056cd19
    JZ 0x0056cd29                       ; 0056cd1b
        ;   XREF to: 0056cd29 (CONDITIONAL_JUMP)  ; LAB_0056cd29
    INC ESI                             ; 0056cd1d
    MOV AL,byte ptr [ESI]               ; 0056cd1e
    CMP AL,DL                           ; 0056cd20
    JZ 0x0056cd2b                       ; 0056cd22
        ;   XREF to: 0056cd2b (CONDITIONAL_JUMP)  ; LAB_0056cd2b
    INC ESI                             ; 0056cd24
    CMP AL,0x0                          ; 0056cd25
    JNZ 0x0056cd13                      ; 0056cd27
        ;   XREF to: 0056cd13 (CONDITIONAL_JUMP)  ; LAB_0056cd13
    SUB ESI,ESI                         ; 0056cd29
        ;   Label: LAB_0056cd29
    TEST ESI,ESI                        ; 0056cd2b
        ;   Label: LAB_0056cd2b
    JZ 0x0056cd36                       ; 0056cd2d
        ;   XREF to: 0056cd36 (CONDITIONAL_JUMP)  ; LAB_0056cd36
    MOV EAX,0xffffffff                  ; 0056cd2f
        ;   Label: LAB_0056cd2f
    JMP 0x0056cd49                      ; 0056cd34
        ;   XREF to: 0056cd49 (UNCONDITIONAL_JUMP)  ; LAB_0056cd49
    MOV EAX,ESP                         ; 0056cd36
        ;   Label: LAB_0056cd36
    PUSH EAX                            ; 0056cd38
    PUSH EBX                            ; 0056cd39
    CALL dword ptr CS:[0x5754cc]        ; 0056cd3a | PTR_FindFirstFileA_005754cc
    CMP EAX,-0x1                        ; 0056cd41
    JZ 0x0056cd49                       ; 0056cd44
        ;   XREF to: 0056cd49 (CONDITIONAL_JUMP)  ; LAB_0056cd49
    MOV EAX,dword ptr [ESP]             ; 0056cd46
    ADD ESP,0x140                       ; 0056cd49
        ;   Label: LAB_0056cd49
    POP ESI                             ; 0056cd4f
    POP EBX                             ; 0056cd50
    RET                                 ; 0056cd51

