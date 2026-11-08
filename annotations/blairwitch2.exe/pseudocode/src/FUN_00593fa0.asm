; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00593fa0(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[17]:
;   FUN_00429b40 at 00429b7e
;   FUN_00450c60 at 00451749
;   FUN_00453d80 at 00453fa3
;   FUN_004555c0 at 00455a27
;   FUN_00455d10 at 00455e26
;   FUN_004562a0 at 00456324
;   FUN_004afa20 at 004afbb5
;   FUN_004d5470 at 004d553d
;   FUN_004fef30 at 004ff1ff
;   FUN_00520140 at 0052026a
;   ... and 7 more
;
; Referenced Globals:
;   undefined4 DAT_005eedaa
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00593fa0
        ;   Label: FUN_00593fa0
    SUB ESP,0x18                        ; 00593fa1
    MOV EDX,ESI                         ; 00593fa4
    FLD float ptr [ESP + 0x20]          ; 00593fa6
    FMUL float ptr [0x005eedaa]         ; 00593faa | DAT_005eedaa
    FLD ST0                             ; 00593fb0
    FCOS                                ; 00593fb2
    FXCH                                ; 00593fb4
    FSIN                                ; 00593fb6
    MOV EDI,ESI                         ; 00593fb8
    XOR ECX,ECX                         ; 00593fba
    MOV ESI,ESP                         ; 00593fbc
    MOV dword ptr [ESP + 0x8],ECX       ; 00593fbe
    MOV dword ptr [ESP + 0xc],ECX       ; 00593fc2
    FXCH                                ; 00593fc6
    FSTP float ptr [ESP]                ; 00593fc8
    FSTP float ptr [ESP + 0x4]          ; 00593fcb
    MOVSD ES:EDI,ESI                    ; 00593fcf
    MOVSD ES:EDI,ESI                    ; 00593fd0
    MOVSD ES:EDI,ESI                    ; 00593fd1
    MOVSD ES:EDI,ESI                    ; 00593fd2
    MOV EAX,EDX                         ; 00593fd3
    ADD ESP,0x18                        ; 00593fd5
    POP EDI                             ; 00593fd8
    RET                                 ; 00593fd9

