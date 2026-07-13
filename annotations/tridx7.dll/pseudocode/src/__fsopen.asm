; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; FILE * __cdecl __fsopen(char *_Filename,char *_Mode,int _ShFlag)
;
; Parameters:
; char *           Stack[0x4]:4   _Filename
; char *           Stack[0x8]:4   _Mode
; int              Stack[0xc]:4   _ShFlag
;
; XREF[1]:
;   FID_conflict:__wfopen at 1000556c
;
; Called Functions:
;   __openfile
;   __unlock_file
;   FUN_10006c40
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10005520
        ;   Label: __fsopen
    PUSH EDI                            ; 10005521
    CALL FUN_10006c40                   ; 10005522
        ;   XREF to: 10006c40 (UNCONDITIONAL_CALL)  ; undefined FUN_10006c40()
    MOV ESI,EAX                         ; 10005527
    TEST ESI,ESI                        ; 10005529
    JNZ 0x10005532                      ; 1000552b
        ;   XREF to: 10005532 (CONDITIONAL_JUMP)  ; LAB_10005532
    XOR EAX,EAX                         ; 1000552d
    POP EDI                             ; 1000552f
    POP ESI                             ; 10005530
    RET                                 ; 10005531
    MOV EAX,dword ptr [ESP + 0x14]      ; 10005532
        ;   Label: LAB_10005532
    PUSH ESI                            ; 10005536
    MOV ECX,dword ptr [ESP + 0x14]      ; 10005537
    PUSH EAX                            ; 1000553b
    MOV EDX,dword ptr [ESP + 0x14]      ; 1000553c
    PUSH ECX                            ; 10005540
    PUSH EDX                            ; 10005541
    CALL __openfile                     ; 10005542
        ;   XREF to: 10006a30 (UNCONDITIONAL_CALL)  ; FILE * __openfile(char * _Filename, char * _Mode, int _ShFlag, FILE * _File)
    ADD ESP,0x10                        ; 10005547
    MOV EDI,EAX                         ; 1000554a
    PUSH ESI                            ; 1000554c
    CALL __unlock_file                  ; 1000554d
        ;   XREF to: 10005aa0 (UNCONDITIONAL_CALL)  ; void __unlock_file(FILE * _File)
    ADD ESP,0x4                         ; 10005552
    MOV EAX,EDI                         ; 10005555
    POP EDI                             ; 10005557
    POP ESI                             ; 10005558
    RET                                 ; 10005559

