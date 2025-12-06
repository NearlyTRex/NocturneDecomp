; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_2d.c_drawLine3D_FUN_00401320(int x1, int y1, uint z1, int x2, int y2, uint z2)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; uint             Stack[0xc]:4   z1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
; uint             Stack[0x18]:4   z2
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_3d.c_clipAndDrawLine3D_FUN_00408070 at 0040830b
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 at 0048cddd
;
; Called Functions:
;   engine_2d.c_plotPixelWithDepth_FUN_00401290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401320
        ;   Label: engine_2d.c_drawLine3D_FUN_00401320
    PUSH ESI                            ; 00401321
    PUSH EDI                            ; 00401322
    PUSH EBP                            ; 00401323
    SUB ESP,0x1c                        ; 00401324
    MOV EDI,dword ptr [ESP + 0x30]      ; 00401327
    MOV ESI,dword ptr [ESP + 0x34]      ; 0040132b
    MOV EBP,dword ptr [ESP + 0x38]      ; 0040132f
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00401333
    MOV EBX,dword ptr [ESP + 0x40]      ; 00401337
    MOV EAX,dword ptr [ESP + 0x44]      ; 0040133b
    MOV dword ptr [ESP + 0x8],0x1       ; 0040133f
    CMP ESI,EBX                         ; 00401347
    JLE 0x0040135d                      ; 00401349 | LAB_0040135d
        ;   XREF to: 0040135d (CONDITIONAL_JUMP)
    MOV EDX,EDI                         ; 0040134b
    MOV EDI,ECX                         ; 0040134d
    MOV ECX,EDX                         ; 0040134f
    MOV EDX,ESI                         ; 00401351
    MOV ESI,EBX                         ; 00401353
    MOV EBX,EDX                         ; 00401355
    MOV EDX,EBP                         ; 00401357
    MOV EBP,EAX                         ; 00401359
    MOV EAX,EDX                         ; 0040135b
    SUB ECX,EDI                         ; 0040135d
        ;   Label: LAB_0040135d
    SUB EBX,ESI                         ; 0040135f
    MOV dword ptr [ESP + 0x18],ECX      ; 00401361
    MOV dword ptr [ESP + 0x14],EBX      ; 00401365
    TEST ECX,ECX                        ; 00401369
    JL 0x004013e7                       ; 0040136b | LAB_004013e7
        ;   XREF to: 004013e7 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x14]      ; 00401371
        ;   Label: LAB_00401371
    MOV EBX,EBP                         ; 00401375
    MOV EDX,EAX                         ; 00401377
    MOV EAX,dword ptr [ESP + 0x18]      ; 00401379
    SUB EDX,EBP                         ; 0040137d
    CMP EAX,ECX                         ; 0040137f
    JLE 0x004013fd                      ; 00401381 | LAB_004013fd
        ;   XREF to: 004013fd (CONDITIONAL_JUMP)
    LEA EBP,[ECX + ECX*0x1]             ; 00401387
    SUB EBP,EAX                         ; 0040138a
    LEA ECX,[EAX + 0x1]                 ; 0040138c
    MOV EAX,EDX                         ; 0040138f
    SAR EDX,0x1f                        ; 00401391
    IDIV ECX                            ; 00401394
    MOV ECX,dword ptr [ESP + 0x18]      ; 00401396
    XOR EDX,EDX                         ; 0040139a
    MOV dword ptr [ESP],EAX             ; 0040139c
    MOV dword ptr [ESP + 0x10],EDX      ; 0040139f
    TEST ECX,ECX                        ; 004013a3
    JL 0x004013df                       ; 004013a5 | LAB_004013df
        ;   XREF to: 004013df (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004013a7
        ;   Label: LAB_004013a7
    PUSH ESI                            ; 004013a8
    PUSH EDI                            ; 004013a9
    CALL engine_2d.c_plotPixelWithDepth_FUN_00401290 ; 004013aa | void engine_2d.c_plotPixelWithDepth_FUN_00401290(int x_coord, int y_coord, uint depth_value)
        ;   XREF to: 00401290 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004013af
    TEST EBP,EBP                        ; 004013b2
    JLE 0x004013bd                      ; 004013b4 | LAB_004013bd
        ;   XREF to: 004013bd (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x18]      ; 004013b6
    INC ESI                             ; 004013ba
    SUB EBP,EAX                         ; 004013bb
    MOV EDX,dword ptr [ESP + 0x8]       ; 004013bd
        ;   Label: LAB_004013bd
    MOV ECX,dword ptr [ESP + 0x14]      ; 004013c1
    MOV EAX,dword ptr [ESP]             ; 004013c5
    ADD EDI,EDX                         ; 004013c8
    ADD EBP,ECX                         ; 004013ca
    MOV EDX,dword ptr [ESP + 0x10]      ; 004013cc
    ADD EBX,EAX                         ; 004013d0
    INC EDX                             ; 004013d2
    MOV ECX,dword ptr [ESP + 0x18]      ; 004013d3
    MOV dword ptr [ESP + 0x10],EDX      ; 004013d7
    CMP EDX,ECX                         ; 004013db
    JLE 0x004013a7                      ; 004013dd | LAB_004013a7
        ;   XREF to: 004013a7 (CONDITIONAL_JUMP)
    ADD ESP,0x1c                        ; 004013df
        ;   Label: LAB_004013df
    POP EBP                             ; 004013e2
    POP EDI                             ; 004013e3
    POP ESI                             ; 004013e4
    POP EBX                             ; 004013e5
    RET                                 ; 004013e6
    MOV EBX,ECX                         ; 004013e7
        ;   Label: LAB_004013e7
    MOV EDX,0xffffffff                  ; 004013e9
    NEG EBX                             ; 004013ee
    MOV dword ptr [ESP + 0x8],EDX       ; 004013f0
    MOV dword ptr [ESP + 0x18],EBX      ; 004013f4
    JMP 0x00401371                      ; 004013f8 | LAB_00401371
        ;   XREF to: 00401371 (UNCONDITIONAL_JUMP)
    LEA EBP,[EAX + EAX*0x1]             ; 004013fd
        ;   Label: LAB_004013fd
    MOV EAX,EDX                         ; 00401400
    SUB EBP,ECX                         ; 00401402
    INC ECX                             ; 00401404
    SAR EDX,0x1f                        ; 00401405
    IDIV ECX                            ; 00401408
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040140a
    XOR EDX,EDX                         ; 0040140e
    MOV dword ptr [ESP + 0x4],EAX       ; 00401410
    MOV dword ptr [ESP + 0xc],EDX       ; 00401414
    TEST ECX,ECX                        ; 00401418
    JL 0x004013df                       ; 0040141a | LAB_004013df
        ;   XREF to: 004013df (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0040141c
        ;   Label: LAB_0040141c
    PUSH ESI                            ; 0040141d
    PUSH EDI                            ; 0040141e
    CALL engine_2d.c_plotPixelWithDepth_FUN_00401290 ; 0040141f | void engine_2d.c_plotPixelWithDepth_FUN_00401290(int x_coord, int y_coord, uint depth_value)
        ;   XREF to: 00401290 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00401424
    TEST EBP,EBP                        ; 00401427
    JLE 0x00401437                      ; 00401429 | LAB_00401437
        ;   XREF to: 00401437 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040142b
    MOV ECX,dword ptr [ESP + 0x8]       ; 0040142f
    SUB EBP,EAX                         ; 00401433
    ADD EDI,ECX                         ; 00401435
    MOV EAX,dword ptr [ESP + 0x18]      ; 00401437
        ;   Label: LAB_00401437
    MOV EDX,dword ptr [ESP + 0x4]       ; 0040143b
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040143f
    INC ESI                             ; 00401443
    INC ECX                             ; 00401444
    ADD EBP,EAX                         ; 00401445
    ADD EBX,EDX                         ; 00401447
    MOV EDX,dword ptr [ESP + 0x14]      ; 00401449
    MOV dword ptr [ESP + 0xc],ECX       ; 0040144d
    CMP ECX,EDX                         ; 00401451
    JG 0x004013df                       ; 00401453 | LAB_004013df
        ;   XREF to: 004013df (CONDITIONAL_JUMP)
    JMP 0x0040141c                      ; 00401455 | LAB_0040141c
        ;   XREF to: 0040141c (UNCONDITIONAL_JUMP)

