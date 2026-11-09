; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_getRelativeFilePath_FUN_004608b0(char *dest_path,char *directory,char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   dest_path
; char *           Stack[0x8]:4   directory
; char *           Stack[0xc]:4   filename
;
; XREF[1]:
;   engine_dosio.cpp_FUN_00460910 at 00460920
;
; Referenced Globals:
;   TerminatedCString s_s_s_005d0c25
;
; Called Functions:
;   crt_unknown.c_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004608b0
        ;   Label: engine_dosio.cpp_getRelativeFilePath_FUN_004608b0
    PUSH EDI                            ; 004608b1
    MOV EDI,dword ptr [ESP + 0xc]       ; 004608b2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004608b6
    MOV ESI,dword ptr [ESP + 0x14]      ; 004608ba
    TEST EAX,EAX                        ; 004608be
    JZ 0x004608da                       ; 004608c0
        ;   XREF to: 004608da (CONDITIONAL_JUMP)  ; LAB_004608da
    CMP byte ptr [EAX],0x0              ; 004608c2
    JZ 0x004608da                       ; 004608c5
        ;   XREF to: 004608da (CONDITIONAL_JUMP)  ; LAB_004608da
    PUSH ESI                            ; 004608c7
    PUSH EAX                            ; 004608c8
    PUSH 0x5d0c25                       ; 004608c9 | = "%s\\%s"
    PUSH EDI                            ; 004608ce
    CALL crt_unknown.c_FUN_005b7790     ; 004608cf
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 004608d4
    POP EDI                             ; 004608d7
    POP ESI                             ; 004608d8
    RET                                 ; 004608d9
    PUSH EDI                            ; 004608da
        ;   Label: LAB_004608da
    MOV AL,byte ptr [ESI]               ; 004608db
        ;   Label: LAB_004608db
    MOV byte ptr [EDI],AL               ; 004608dd
    CMP AL,0x0                          ; 004608df
    JZ 0x004608f3                       ; 004608e1
        ;   XREF to: 004608f3 (CONDITIONAL_JUMP)  ; LAB_004608f3
    MOV AL,byte ptr [ESI + 0x1]         ; 004608e3
    ADD ESI,0x2                         ; 004608e6
    MOV byte ptr [EDI + 0x1],AL         ; 004608e9
    ADD EDI,0x2                         ; 004608ec
    CMP AL,0x0                          ; 004608ef
    JNZ 0x004608db                      ; 004608f1
        ;   XREF to: 004608db (CONDITIONAL_JUMP)  ; LAB_004608db
    POP EDI                             ; 004608f3
        ;   Label: LAB_004608f3
    POP EDI                             ; 004608f4
    POP ESI                             ; 004608f5
    RET                                 ; 004608f6

