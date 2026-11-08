; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00594380(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[21]:
;   FUN_0040ded0 at 0040dfed
;   FUN_0040f950 at 0040fb1e
;   FUN_0041a0c0 at 0041a255
;   FUN_0041a2e0 at 0041a315
;   FUN_00435830 at 00435b2c
;   FUN_00438060 at 00438200
;   FUN_004382a0 at 004382d5
;   FUN_00438550 at 0043858b
;   FUN_00453d80 at 004540a1
;   FUN_004afa20 at 004afa6b
;   ... and 11 more
;
; Referenced Globals:
;   undefined4 DAT_005eedea
;
; Called Functions:
;   FUN_00449c20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00594380
        ;   Label: FUN_00594380
    PUSH EDI                            ; 00594381
    SUB ESP,0x38                        ; 00594382
    MOV EBX,ESI                         ; 00594385
    MOV ESI,dword ptr [ESP + 0x44]      ; 00594387
    FLD float ptr [ESI]                 ; 0059438b
    LEA EAX,[ESP + 0x24]                ; 0059438d
    FMUL float ptr [0x005eedea]         ; 00594391 | DAT_005eedea
    PUSH EAX                            ; 00594397
    LEA EAX,[ESP + 0x1c]                ; 00594398
    PUSH EAX                            ; 0059439c
    LEA EAX,[ESP + 0x18]                ; 0059439d
    PUSH EAX                            ; 005943a1
    FSTP float ptr [ESP + 0x30]         ; 005943a2
    CALL FUN_00449c20                   ; 005943a6
        ;   XREF to: 00449c20 (UNCONDITIONAL_CALL)  ; undefined FUN_00449c20()
    FLD float ptr [ESI + 0x8]           ; 005943ab
    LEA EAX,[ESP + 0x40]                ; 005943ae
    ADD ESP,0xc                         ; 005943b2
    FMUL float ptr [0x005eedea]         ; 005943b5 | DAT_005eedea
    PUSH EAX                            ; 005943bb
    LEA EAX,[ESP + 0x20]                ; 005943bc
    PUSH EAX                            ; 005943c0
    LEA EAX,[ESP + 0x1c]                ; 005943c1
    PUSH EAX                            ; 005943c5
    FSTP float ptr [ESP + 0x40]         ; 005943c6
    CALL FUN_00449c20                   ; 005943ca
        ;   XREF to: 00449c20 (UNCONDITIONAL_CALL)  ; undefined FUN_00449c20()
    FLD float ptr [ESI + 0x4]           ; 005943cf
    LEA EAX,[ESP + 0x38]                ; 005943d2
    ADD ESP,0xc                         ; 005943d6
    FMUL float ptr [0x005eedea]         ; 005943d9 | DAT_005eedea
    PUSH EAX                            ; 005943df
    LEA EAX,[ESP + 0x24]                ; 005943e0
    PUSH EAX                            ; 005943e4
    LEA EAX,[ESP + 0x30]                ; 005943e5
    PUSH EAX                            ; 005943e9
    FSTP float ptr [ESP + 0x38]         ; 005943ea
    CALL FUN_00449c20                   ; 005943ee
        ;   XREF to: 00449c20 (UNCONDITIONAL_CALL)  ; undefined FUN_00449c20()
    ADD ESP,0xc                         ; 005943f3
    FLD float ptr [ESP + 0x1c]          ; 005943f6
    FMUL float ptr [ESP + 0x18]         ; 005943fa
    FLD float ptr [ESP + 0x1c]          ; 005943fe
    FMUL float ptr [ESP + 0x20]         ; 00594402
    FLD float ptr [ESP + 0x18]          ; 00594406
    FMUL float ptr [ESP + 0x20]         ; 0059440a
    FLD float ptr [ESP + 0x14]          ; 0059440e
    FCHS                                ; 00594412
    FMUL float ptr [ESP + 0x20]         ; 00594414
    FXCH ST2                            ; 00594418
    FMUL float ptr [ESP + 0x10]         ; 0059441a
    FXCH                                ; 0059441e
    FMUL float ptr [ESP + 0x14]         ; 00594420
    FXCH ST2                            ; 00594424
    FMUL float ptr [ESP + 0x10]         ; 00594426
    FXCH ST3                            ; 0059442a
    FST float ptr [ESP + 0x30]          ; 0059442c
    FMUL float ptr [ESP + 0x20]         ; 00594430
    FLD float ptr [ESP + 0x14]          ; 00594434
    FMUL float ptr [ESP + 0x18]         ; 00594438
    FLD float ptr [ESP + 0x1c]          ; 0059443c
    FMUL float ptr [ESP + 0x10]         ; 00594440
    FLD float ptr [ESP + 0x14]          ; 00594444
    FMUL float ptr [ESP + 0x10]         ; 00594448
    FXCH ST2                            ; 0059444c
    FMUL float ptr [ESP + 0x28]         ; 0059444e
    FXCH ST2                            ; 00594452
    FMUL float ptr [ESP + 0x28]         ; 00594454
    FXCH ST2                            ; 00594458
    FADDP ST4,ST0                       ; 0059445a
    FLD float ptr [ESP + 0x30]          ; 0059445c
    FMUL float ptr [ESP + 0x28]         ; 00594460
    FXCH                                ; 00594464
    FMUL float ptr [ESP + 0x28]         ; 00594466
    MOV EDI,EBX                         ; 0059446a
    FXCH                                ; 0059446c
    FADDP ST6,ST0                       ; 0059446e
    MOV ESI,ESP                         ; 00594470
    FXCH ST5                            ; 00594472
    FSTP float ptr [ESP + 0x8]          ; 00594474
    FXCH ST4                            ; 00594478
    FSUBP ST3,ST0                       ; 0059447a
    FXCH                                ; 0059447c
    FSTP float ptr [ESP + 0x4]          ; 0059447e
    FADDP ST2,ST0                       ; 00594482
    FSTP float ptr [ESP + 0xc]          ; 00594484
    FSTP float ptr [ESP]                ; 00594488
    MOVSD ES:EDI,ESI                    ; 0059448b
    MOVSD ES:EDI,ESI                    ; 0059448c
    MOVSD ES:EDI,ESI                    ; 0059448d
    MOVSD ES:EDI,ESI                    ; 0059448e
    MOV EAX,EBX                         ; 0059448f
    ADD ESP,0x38                        ; 00594491
    POP EDI                             ; 00594494
    POP EBX                             ; 00594495
    RET                                 ; 00594496

