; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a28f0(undefined4 param_1)
;
;
; XREF[110]:
;   FUN_00402f30 at 00402f9b
;   FUN_0040dbb0 at 0040dbc7
;   FUN_004157c0 at 00415bde
;   FUN_00416890 at 00416918
;   FUN_00417400 at 004174df
;   FUN_00420ea0 at 00420f17
;   FUN_00421b00 at 00421b25
;   FUN_0042ac20 at 0042ae18
;   FUN_0043f8c0 at 0043f8d6
;   FUN_0043f9d0 at 0043fa1a
;   ... and 100 more
;
; Called Functions:
;   FUN_005a7100
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a28f0
        ;   Label: FUN_005a28f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a28f4
    MOV ECX,dword ptr [ESP + 0xc]       ; 005a28f8
    PUSH EAX                            ; 005a28fc
    MOV DH,DL                           ; 005a28fd
    SHL EDX,0x8                         ; 005a28ff
    MOV DL,DH                           ; 005a2902
    SHL EDX,0x8                         ; 005a2904
    MOV DL,DH                           ; 005a2907
    CALL FUN_005a7100                   ; 005a2909
        ;   XREF to: 005a7100 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7100()
    POP EAX                             ; 005a290e
    RET                                 ; 005a290f

