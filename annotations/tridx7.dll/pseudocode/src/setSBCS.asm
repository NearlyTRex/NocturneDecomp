; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl setSBCS(void)
;
;
; XREF[1]:
;   __setmbcp at 10007ef0
;
; Referenced Globals:
;   undefined4 DAT_10016dd8
;   undefined1 DAT_10016ddc
;   undefined4 DAT_10016edc
;   undefined4 DAT_10016ee0
;   undefined4 DAT_10016ee8
;   undefined4 DAT_10016eec
;   undefined4 DAT_10016ef0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 10008190
        ;   Label: setSBCS
    XOR EAX,EAX                         ; 10008191
    MOV EDI,0x10016dd8                  ; 10008193 | DAT_10016dd8
    MOV ECX,0x40                        ; 10008198
    STOSD.REP ES:EDI                    ; 1000819d | DAT_10016dd8 | DAT_10016ddc
    STOSB ES:EDI                        ; 1000819f | DAT_10016ddc
    MOV [0x10016ee8],EAX                ; 100081a0 | DAT_10016ee8
    MOV ECX,0x10016ee8                  ; 100081a5 | DAT_10016ee8
    POP EDI                             ; 100081aa
    MOV [0x10016edc],EAX                ; 100081ab | DAT_10016edc
    MOV [0x10016ee0],EAX                ; 100081b0 | DAT_10016ee0
    MOV dword ptr [ECX + 0x4],EAX       ; 100081b5 | DAT_10016eec
    MOV dword ptr [ECX + 0x8],EAX       ; 100081b8 | DAT_10016ef0
    RET                                 ; 100081bb

