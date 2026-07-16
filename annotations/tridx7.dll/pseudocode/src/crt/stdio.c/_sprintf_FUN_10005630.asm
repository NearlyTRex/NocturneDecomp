; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c__sprintf_FUN_10005630(char *dest,char *format)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   APIDLLsetVideoMode at 10002ac3
;
; Called Functions:
;   crt_stdio.c__flsbuf_FUN_10007420
;   crt_stdio.c__output_FUN_10005f40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 10005630
        ;   Label: crt_stdio.c__sprintf_FUN_10005630
    SUB ESP,0x20                        ; 10005634
    LEA ECX,[ESP + 0x2c]                ; 10005637
    PUSH ESI                            ; 1000563b
    MOV dword ptr [ESP + 0x10],0x42     ; 1000563c
    MOV dword ptr [ESP + 0xc],EAX       ; 10005644
    PUSH ECX                            ; 10005648
    MOV dword ptr [ESP + 0x8],EAX       ; 10005649
    LEA EAX,[ESP + 0x8]                 ; 1000564d
    MOV dword ptr [ESP + 0xc],0x7fffffff ; 10005651
    MOV EDX,dword ptr [ESP + 0x30]      ; 10005659
    PUSH EDX                            ; 1000565d
    PUSH EAX                            ; 1000565e
    CALL crt_stdio.c__output_FUN_10005f40 ; 1000565f
        ;   XREF to: 10005f40 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__output_FUN_10005f40(_FILE * file_handle, char * fmt, va_list args)
    ADD ESP,0xc                         ; 10005664
    MOV ESI,EAX                         ; 10005667
    DEC dword ptr [ESP + 0x8]           ; 10005669
    JS 0x10005681                       ; 1000566d
        ;   XREF to: 10005681 (CONDITIONAL_JUMP)  ; LAB_10005681
    MOV EAX,dword ptr [ESP + 0x4]       ; 1000566f
    MOV byte ptr [EAX],0x0              ; 10005673
    MOV EAX,ESI                         ; 10005676
    INC dword ptr [ESP + 0x4]           ; 10005678
    POP ESI                             ; 1000567c
    ADD ESP,0x20                        ; 1000567d
    RET                                 ; 10005680
    LEA EAX,[ESP + 0x4]                 ; 10005681
        ;   Label: LAB_10005681
    PUSH EAX                            ; 10005685
    PUSH 0x0                            ; 10005686
    CALL crt_stdio.c__flsbuf_FUN_10007420 ; 10005688
        ;   XREF to: 10007420 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__flsbuf_FUN_10007420(int ch, _FILE * str)
    ADD ESP,0x8                         ; 1000568d
    MOV EAX,ESI                         ; 10005690
    POP ESI                             ; 10005692
    ADD ESP,0x20                        ; 10005693
    RET                                 ; 10005696

