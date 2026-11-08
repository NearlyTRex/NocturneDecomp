; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00449280(float *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[54]:
;   FUN_00408ae0 at 00408b32
;   FUN_00416d70 at 00416d8a
;   FUN_00417270 at 004172ef
;   FUN_0041d020 at 0041d241
;   FUN_00420000 at 00420198
;   FUN_004203a0 at 00420711
;   FUN_00427360 at 004275b8
;   FUN_0042abe0 at 0042ae63
;   FUN_0044f840 at 0044f88c
;   FUN_00453d80 at 0045467c
;   ... and 44 more
;
; Called Functions:
;   FUN_00449c20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449280
        ;   Label: FUN_00449280
    PUSH ESI                            ; 00449281
    SUB ESP,0x18                        ; 00449282
    MOV EBX,dword ptr [ESP + 0x24]      ; 00449285
    MOV ESI,dword ptr [ESP + 0x28]      ; 00449289
    PUSH ESI                            ; 0044928d
    LEA EAX,[ESP + 0x8]                 ; 0044928e
    PUSH EAX                            ; 00449292
    LEA EAX,[ESP + 0x8]                 ; 00449293
    PUSH EAX                            ; 00449297
    CALL FUN_00449c20                   ; 00449298
        ;   XREF to: 00449c20 (UNCONDITIONAL_CALL)  ; undefined FUN_00449c20()
    ADD ESP,0xc                         ; 0044929d
    LEA EAX,[ESI + 0x8]                 ; 004492a0
    PUSH EAX                            ; 004492a3
    LEA EAX,[ESP + 0x10]                ; 004492a4
    PUSH EAX                            ; 004492a8
    LEA EAX,[ESP + 0x10]                ; 004492a9
    PUSH EAX                            ; 004492ad
    CALL FUN_00449c20                   ; 004492ae
        ;   XREF to: 00449c20 (UNCONDITIONAL_CALL)  ; undefined FUN_00449c20()
    ADD ESP,0xc                         ; 004492b3
    LEA EAX,[ESI + 0x4]                 ; 004492b6
    PUSH EAX                            ; 004492b9
    LEA EAX,[ESP + 0x18]                ; 004492ba
    PUSH EAX                            ; 004492be
    LEA EAX,[ESP + 0x18]                ; 004492bf
    PUSH EAX                            ; 004492c3
    CALL FUN_00449c20                   ; 004492c4
        ;   XREF to: 00449c20 (UNCONDITIONAL_CALL)  ; undefined FUN_00449c20()
    ADD ESP,0xc                         ; 004492c9
    FLD float ptr [ESP + 0x10]          ; 004492cc
    FMUL float ptr [ESP]                ; 004492d0
    FMUL float ptr [ESP + 0x8]          ; 004492d3
    FLD float ptr [ESP + 0x14]          ; 004492d7
    FMUL float ptr [ESP + 0xc]          ; 004492db
    FADDP                               ; 004492df
    FSTP float ptr [EBX]                ; 004492e1
    FLD float ptr [ESP + 0x10]          ; 004492e3
    FMUL float ptr [ESP]                ; 004492e7
    FMUL float ptr [ESP + 0xc]          ; 004492ea
    FLD float ptr [ESP + 0x14]          ; 004492ee
    FCHS                                ; 004492f2
    FMUL float ptr [ESP + 0x8]          ; 004492f4
    FADDP                               ; 004492f8
    FSTP float ptr [EBX + 0x4]          ; 004492fa
    FLD float ptr [ESP + 0x10]          ; 004492fd
    FMUL float ptr [ESP + 0x4]          ; 00449301
    FSTP float ptr [EBX + 0x8]          ; 00449305
    FLD float ptr [ESP + 0x8]           ; 00449308
    FMUL float ptr [ESP + 0x4]          ; 0044930c
    FSTP float ptr [EBX + 0xc]          ; 00449310
    FLD float ptr [ESP + 0xc]           ; 00449313
    FMUL float ptr [ESP + 0x4]          ; 00449317
    FSTP float ptr [EBX + 0x10]         ; 0044931b
    FLD float ptr [ESP]                 ; 0044931e
    FCHS                                ; 00449321
    FSTP float ptr [EBX + 0x14]         ; 00449323
    FLD float ptr [ESP + 0x14]          ; 00449326
    FMUL float ptr [ESP]                ; 0044932a
    FMUL float ptr [ESP + 0x8]          ; 0044932d
    FLD float ptr [ESP + 0x10]          ; 00449331
    FCHS                                ; 00449335
    FMUL float ptr [ESP + 0xc]          ; 00449337
    FADDP                               ; 0044933b
    FSTP float ptr [EBX + 0x18]         ; 0044933d
    FLD float ptr [ESP + 0x14]          ; 00449340
    FMUL float ptr [ESP]                ; 00449344
    FMUL float ptr [ESP + 0xc]          ; 00449347
    FLD float ptr [ESP + 0x8]           ; 0044934b
    FMUL float ptr [ESP + 0x10]         ; 0044934f
    FADDP                               ; 00449353
    FSTP float ptr [EBX + 0x1c]         ; 00449355
    FLD float ptr [ESP + 0x14]          ; 00449358
    FMUL float ptr [ESP + 0x4]          ; 0044935c
    FSTP float ptr [EBX + 0x20]         ; 00449360
    ADD ESP,0x18                        ; 00449363
    POP ESI                             ; 00449366
    POP EBX                             ; 00449367
    RET                                 ; 00449368

