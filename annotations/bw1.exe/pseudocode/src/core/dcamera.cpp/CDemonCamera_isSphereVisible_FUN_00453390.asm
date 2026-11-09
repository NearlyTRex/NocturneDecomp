; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_CDemonCamera_isSphereVisible_FUN_00453390(CDemonCamera *this_ptr,CVector3f *position,float radius)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   radius
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_FUN_004b56a0 at 004b57ab
;
; Referenced Globals:
;   undefined4 DAT_005fe5fc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453390
        ;   Label: core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00453390
    PUSH ESI                            ; 00453391
    PUSH EDI                            ; 00453392
    PUSH EBP                            ; 00453393
    MOV EBP,ESP                         ; 00453394
    SUB ESP,0x20                        ; 00453396
    MOV EAX,dword ptr [EBP + 0x18]      ; 00453399
    LEA EBX,[EBP + -0x20]               ; 0045339c
    FLD float ptr [EAX]                 ; 0045339f
    FMUL float ptr [0x005fe5fc]         ; 004533a1 | DAT_005fe5fc
    FISTP dword ptr [EBX]               ; 004533a7
    FLD float ptr [EAX + 0x4]           ; 004533a9
    FMUL float ptr [0x005fe5fc]         ; 004533ac | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x4]         ; 004533b2
    FLD float ptr [EAX + 0x8]           ; 004533b5
    FMUL float ptr [0x005fe5fc]         ; 004533b8 | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x8]         ; 004533be
    FLD float ptr [EBP + 0x1c]          ; 004533c1
    FLD float ptr [0x005fe5fc]          ; 004533c7 | DAT_005fe5fc
    FMULP                               ; 004533cd
    FIST dword ptr [EBP + 0xfffffff8]   ; 004533cf
    FISTP dword ptr [EBP + 0xfffffffc]  ; 004533d5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004533db
    MOV EDX,dword ptr [EBP + -0x20]     ; 004533de
    SUB EDX,dword ptr [EAX + 0x16c]     ; 004533e1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004533e7
    MOV dword ptr [EBP + -0x20],EDX     ; 004533ea
    MOV ECX,dword ptr [EBP + -0x1c]     ; 004533ed
    SUB ECX,dword ptr [EAX + 0x170]     ; 004533f0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004533f6
    MOV dword ptr [EBP + -0x1c],ECX     ; 004533f9
    MOV EBX,dword ptr [EBP + -0x18]     ; 004533fc
    SUB EBX,dword ptr [EAX + 0x174]     ; 004533ff
    MOV EAX,EDX                         ; 00453405
    MOV dword ptr [EBP + -0x18],EBX     ; 00453407
    CDQ                                 ; 0045340a
    XOR EAX,EDX                         ; 0045340b
    SUB EAX,EDX                         ; 0045340d
    CMP EAX,dword ptr [EBP + -0x8]      ; 0045340f
    JGE 0x00453425                      ; 00453412
        ;   XREF to: 00453425 (CONDITIONAL_JUMP)  ; LAB_00453425
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00453414
    CDQ                                 ; 00453417
    XOR EAX,EDX                         ; 00453418
    SUB EAX,EDX                         ; 0045341a
    CMP EAX,dword ptr [EBP + -0x8]      ; 0045341c
    JL 0x0045351e                       ; 0045341f
        ;   XREF to: 0045351e (CONDITIONAL_JUMP)  ; LAB_0045351e
    MOV EDX,dword ptr [EBP + 0x14]      ; 00453425
        ;   Label: LAB_00453425
    MOV EAX,dword ptr [EBP + -0x20]     ; 00453428
    MOV EDX,dword ptr [EDX + 0x178]     ; 0045342b
    IMUL EDX                            ; 00453431
    SHRD EAX,EDX,0x10                   ; 00453433
    MOV EDX,dword ptr [EBP + 0x14]      ; 00453437
    MOV ECX,EAX                         ; 0045343a
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0045343c
    MOV EDX,dword ptr [EDX + 0x184]     ; 0045343f
    IMUL EDX                            ; 00453445
    SHRD EAX,EDX,0x10                   ; 00453447
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045344b
    ADD ECX,EAX                         ; 0045344e
    MOV EAX,dword ptr [EBP + -0x18]     ; 00453450
    MOV EDX,dword ptr [EDX + 0x190]     ; 00453453
    IMUL EDX                            ; 00453459
    SHRD EAX,EDX,0x10                   ; 0045345b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045345f
    ADD ECX,EAX                         ; 00453462
    MOV EAX,dword ptr [EBP + -0x20]     ; 00453464
    MOV EDX,dword ptr [EDX + 0x17c]     ; 00453467
    MOV dword ptr [EBP + -0x14],ECX     ; 0045346d
    IMUL EDX                            ; 00453470
    SHRD EAX,EDX,0x10                   ; 00453472
    MOV EDX,dword ptr [EBP + 0x14]      ; 00453476
    MOV ECX,EAX                         ; 00453479
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0045347b
    MOV EDX,dword ptr [EDX + 0x188]     ; 0045347e
    IMUL EDX                            ; 00453484
    SHRD EAX,EDX,0x10                   ; 00453486
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045348a
    ADD ECX,EAX                         ; 0045348d
    MOV EAX,dword ptr [EBP + -0x18]     ; 0045348f
    MOV EDX,dword ptr [EDX + 0x194]     ; 00453492
    IMUL EDX                            ; 00453498
    SHRD EAX,EDX,0x10                   ; 0045349a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045349e
    ADD ECX,EAX                         ; 004534a1
    MOV EAX,dword ptr [EBP + -0x20]     ; 004534a3
    MOV EDX,dword ptr [EDX + 0x180]     ; 004534a6
    MOV dword ptr [EBP + -0x10],ECX     ; 004534ac
    IMUL EDX                            ; 004534af
    SHRD EAX,EDX,0x10                   ; 004534b1
    MOV EDX,dword ptr [EBP + 0x14]      ; 004534b5
    MOV ECX,EAX                         ; 004534b8
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004534ba
    MOV EDX,dword ptr [EDX + 0x18c]     ; 004534bd
    IMUL EDX                            ; 004534c3
    SHRD EAX,EDX,0x10                   ; 004534c5
    MOV EDX,dword ptr [EBP + 0x14]      ; 004534c9
    ADD ECX,EAX                         ; 004534cc
    MOV EAX,dword ptr [EBP + -0x18]     ; 004534ce
    MOV EDX,dword ptr [EDX + 0x198]     ; 004534d1
    IMUL EDX                            ; 004534d7
    SHRD EAX,EDX,0x10                   ; 004534d9
    ADD ECX,EAX                         ; 004534dd
    MOV EAX,dword ptr [EBP + -0x14]     ; 004534df
    MOV dword ptr [EBP + -0xc],ECX      ; 004534e2
    MOV ECX,dword ptr [EBP + -0x8]      ; 004534e5
    MOV EBX,dword ptr [EBP + -0xc]      ; 004534e8
    SUB EAX,ECX                         ; 004534eb
    CMP EAX,EBX                         ; 004534ed
    JG 0x00453515                       ; 004534ef
        ;   XREF to: 00453515 (CONDITIONAL_JUMP)  ; LAB_00453515
    MOV EDX,dword ptr [EBP + -0x14]     ; 004534f1
    MOV ESI,dword ptr [EBP + -0x8]      ; 004534f4
    MOV EAX,EBX                         ; 004534f7
    ADD EDX,ESI                         ; 004534f9
    NEG EAX                             ; 004534fb
    CMP EDX,EAX                         ; 004534fd
    JL 0x00453515                       ; 004534ff
        ;   XREF to: 00453515 (CONDITIONAL_JUMP)  ; LAB_00453515
    MOV EDX,dword ptr [EBP + -0x10]     ; 00453501
    SUB EDX,dword ptr [EBP + -0x4]      ; 00453504
    CMP EDX,EBX                         ; 00453507
    JG 0x00453515                       ; 00453509
        ;   XREF to: 00453515 (CONDITIONAL_JUMP)  ; LAB_00453515
    MOV EDX,dword ptr [EBP + -0x10]     ; 0045350b
    ADD EDX,dword ptr [EBP + -0x4]      ; 0045350e
    CMP EDX,EAX                         ; 00453511
    JGE 0x0045352f                      ; 00453513
        ;   XREF to: 0045352f (CONDITIONAL_JUMP)  ; LAB_0045352f
    XOR EAX,EAX                         ; 00453515
        ;   Label: LAB_00453515
    MOV ESP,EBP                         ; 00453517
    POP EBP                             ; 00453519
    POP EDI                             ; 0045351a
    POP ESI                             ; 0045351b
    POP EBX                             ; 0045351c
    RET                                 ; 0045351d
    MOV EAX,dword ptr [EBP + -0x18]     ; 0045351e
        ;   Label: LAB_0045351e
    CDQ                                 ; 00453521
    XOR EAX,EDX                         ; 00453522
    SUB EAX,EDX                         ; 00453524
    CMP EAX,dword ptr [EBP + -0x8]      ; 00453526
    JGE 0x00453425                      ; 00453529
        ;   XREF to: 00453425 (CONDITIONAL_JUMP)  ; LAB_00453425
    MOV EAX,0x1                         ; 0045352f
        ;   Label: LAB_0045352f
    MOV ESP,EBP                         ; 00453534
    POP EBP                             ; 00453536
    POP EDI                             ; 00453537
    POP ESI                             ; 00453538
    POP EBX                             ; 00453539
    RET                                 ; 0045353a

