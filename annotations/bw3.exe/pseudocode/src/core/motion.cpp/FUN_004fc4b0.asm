; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_FUN_004fc4b0(CMotionController *this_ptr,int *inout_motion_index,float *inout_frame_number,float delta_time,float scale_factor)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   inout_motion_index
; float *          Stack[0xc]:4   inout_frame_number
; float            Stack[0x10]:4   delta_time
; float            Stack[0x14]:4   scale_factor
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_motion.cpp_CMotionController_advance_FUN_004fbb70 at 004fbca2
;
; Referenced Globals:
;   void* switchdataD_004fc494 = 004fc578
;   undefined4 DAT_005c9d6c
;   undefined4 DAT_005c9d74
;   undefined4 DAT_005c9d7c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc4b0
        ;   Label: core_motion.cpp_FUN_004fc4b0
    PUSH ESI                            ; 004fc4b1
    PUSH EDI                            ; 004fc4b2
    PUSH EBP                            ; 004fc4b3
    MOV EBP,ESP                         ; 004fc4b4
    SUB ESP,0x18                        ; 004fc4b6
    AND ESP,0xfffffff8                  ; 004fc4b9
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004fc4bc
    MOV EAX,dword ptr [EBP + 0x18]      ; 004fc4bf
    MOV EAX,dword ptr [EAX]             ; 004fc4c2
    MOV EBX,dword ptr [EBP + 0x14]      ; 004fc4c4
    LEA EDX,[EAX*0x8 + 0x0]             ; 004fc4c7
    MOV EBX,dword ptr [EBX]             ; 004fc4ce
    ADD EDX,EAX                         ; 004fc4d0
    ADD EBX,0x1c28                      ; 004fc4d2
    SHL EDX,0x5                         ; 004fc4d8
    ADD EBX,EDX                         ; 004fc4db
    FLD float ptr [EBP + 0x20]          ; 004fc4dd
    FMUL float ptr [EBX + 0x20]         ; 004fc4e0
    XOR EDI,EDI                         ; 004fc4e3
    XOR ECX,ECX                         ; 004fc4e5
    FADD float ptr [ESI]                ; 004fc4e7
    MOV EDX,dword ptr [EBX + 0x78]      ; 004fc4e9
    FSTP float ptr [ESP + 0xc]          ; 004fc4ec
    TEST EDX,EDX                        ; 004fc4f0
    JLE 0x004fc517                      ; 004fc4f2
        ;   XREF to: 004fc517 (CONDITIONAL_JUMP)  ; LAB_004fc517
    MOV EDX,EBX                         ; 004fc4f4
    FLD float ptr [ESI]                 ; 004fc4f6
        ;   Label: LAB_004fc4f6
    FILD dword ptr [EDX + 0x7c]         ; 004fc4f8
    FSTP float ptr [ESP + 0x8]          ; 004fc4fb
    FCOMP float ptr [ESP + 0x8]         ; 004fc4ff
    FNSTSW AX                           ; 004fc503
    SAHF                                ; 004fc505
    JBE 0x004fc58f                      ; 004fc506
        ;   XREF to: 004fc58f (CONDITIONAL_JUMP)  ; LAB_004fc58f
    INC ECX                             ; 004fc50c
        ;   Label: LAB_004fc50c
    MOV EAX,dword ptr [EBX + 0x78]      ; 004fc50d
    ADD EDX,0x8                         ; 004fc510
    CMP ECX,EAX                         ; 004fc513
    JL 0x004fc4f6                       ; 004fc515
        ;   XREF to: 004fc4f6 (CONDITIONAL_JUMP)  ; LAB_004fc4f6
    FILD dword ptr [EBX + 0x64]         ; 004fc517
        ;   Label: LAB_004fc517
    FADD double ptr [0x005c9d6c]        ; 004fc51a | DAT_005c9d6c
    FLD float ptr [ESP + 0xc]           ; 004fc520
    FCOMPP                              ; 004fc524
    FNSTSW AX                           ; 004fc526
    SAHF                                ; 004fc528
    JC 0x004fc62b                       ; 004fc529
        ;   XREF to: 004fc62b (CONDITIONAL_JUMP)  ; LAB_004fc62b
    MOV EDX,dword ptr [EBX + 0x60]      ; 004fc52f
    ADD EDX,dword ptr [EBX + 0x6c]      ; 004fc532
    PUSH dword ptr [EBP + 0x24]         ; 004fc535
    MOV dword ptr [ESP + 0x18],EDX      ; 004fc538
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fc53c
    FILD dword ptr [ESP + 0x18]         ; 004fc53f
    SUB ESP,0x4                         ; 004fc543
    MOV EAX,dword ptr [EAX + 0x50]      ; 004fc546
    FSTP float ptr [ESP]                ; 004fc549
    FILD dword ptr [EBX + 0x68]         ; 004fc54c
    FDIVR float ptr [ESI]               ; 004fc54f
    SUB ESP,0x4                         ; 004fc551
    FILD dword ptr [EBX + 0x60]         ; 004fc554
    FADDP                               ; 004fc557
    MOV EDX,dword ptr [EBP + 0x14]      ; 004fc559
    FSTP float ptr [ESP]                ; 004fc55c
    PUSH EDX                            ; 004fc55f
    CALL dword ptr [EAX + 0x8]          ; 004fc560
    MOV EAX,dword ptr [EBX + 0x30]      ; 004fc563
    SUB EAX,0x3                         ; 004fc566
    ADD ESP,0x10                        ; 004fc569
    CMP EAX,0x3                         ; 004fc56c
    JA 0x004fc5c4                       ; 004fc56f
        ;   XREF to: 004fc5c4 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4fc494]  ; 004fc571 | caseD_6 | switchdataD_004fc494
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0x64]      ; 004fc578
        ;   Label: caseD_3
    DEC EAX                             ; 004fc57b
    MOV dword ptr [ESP + 0x14],EAX      ; 004fc57c
    FILD dword ptr [ESP + 0x14]         ; 004fc580
    FSTP float ptr [ESI]                ; 004fc584
    MOV EAX,EDI                         ; 004fc586
    MOV ESP,EBP                         ; 004fc588
    POP EBP                             ; 004fc58a
    POP EDI                             ; 004fc58b
    POP ESI                             ; 004fc58c
    POP EBX                             ; 004fc58d
    RET                                 ; 004fc58e
    FLD float ptr [ESP + 0xc]           ; 004fc58f
        ;   Label: LAB_004fc58f
    FADD double ptr [0x005c9d7c]        ; 004fc593 | DAT_005c9d7c
    FLD float ptr [ESP + 0x8]           ; 004fc599
    FSTP double ptr [ESP]               ; 004fc59d
    FCOMP double ptr [ESP]              ; 004fc5a0
    FNSTSW AX                           ; 004fc5a3
    SAHF                                ; 004fc5a5
    JC 0x004fc50c                       ; 004fc5a6
        ;   XREF to: 004fc50c (CONDITIONAL_JUMP)  ; LAB_004fc50c
    FLD double ptr [ESP]                ; 004fc5ac
    FADD double ptr [0x005c9d7c]        ; 004fc5af | DAT_005c9d7c
    MOV EDI,dword ptr [EDX + 0x80]      ; 004fc5b5
    FSTP float ptr [ESP + 0xc]          ; 004fc5bb
    JMP 0x004fc50c                      ; 004fc5bf
        ;   XREF to: 004fc50c (UNCONDITIONAL_JUMP)  ; LAB_004fc50c
    MOV EAX,dword ptr [EBX + 0x38]      ; 004fc5c4
        ;   Label: default
    MOV dword ptr [ESP + 0x10],EAX      ; 004fc5c7
    FLD float ptr [ESP + 0x10]          ; 004fc5cb
    FCOMP float ptr [0x005c9d74]        ; 004fc5cf | DAT_005c9d74
    FNSTSW AX                           ; 004fc5d5
    SAHF                                ; 004fc5d7
    JZ 0x004fc5f1                       ; 004fc5d8
        ;   XREF to: 004fc5f1 (CONDITIONAL_JUMP)  ; LAB_004fc5f1
    MOV EDX,dword ptr [EBP + 0x18]      ; 004fc5da
        ;   Label: LAB_004fc5da
    MOV EAX,dword ptr [EBX + 0x34]      ; 004fc5dd
    MOV dword ptr [EDX],EAX             ; 004fc5e0
    MOV EAX,dword ptr [ESP + 0x10]      ; 004fc5e2
    MOV dword ptr [ESI],EAX             ; 004fc5e6
    MOV EAX,EDI                         ; 004fc5e8
    MOV ESP,EBP                         ; 004fc5ea
    POP EBP                             ; 004fc5ec
    POP EDI                             ; 004fc5ed
    POP ESI                             ; 004fc5ee
    POP EBX                             ; 004fc5ef
    RET                                 ; 004fc5f0
    MOV EDX,dword ptr [EBP + 0x14]      ; 004fc5f1
        ;   Label: LAB_004fc5f1
    MOV EAX,dword ptr [EBX + 0x64]      ; 004fc5f4
    MOV ECX,dword ptr [EBX + 0x34]      ; 004fc5f7
    DEC EAX                             ; 004fc5fa
    PUSH ECX                            ; 004fc5fb
    MOV dword ptr [ESP + 0x18],EAX      ; 004fc5fc
    MOV EDX,dword ptr [EDX + 0x50]      ; 004fc600
    FILD dword ptr [ESP + 0x18]         ; 004fc603
    SUB ESP,0x4                         ; 004fc607
    MOV EAX,dword ptr [EBP + 0x18]      ; 004fc60a
    FSTP float ptr [ESP]                ; 004fc60d
    MOV ECX,dword ptr [EAX]             ; 004fc610
    PUSH ECX                            ; 004fc612
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fc613
    PUSH EAX                            ; 004fc616
    CALL dword ptr [EDX + 0x4]          ; 004fc617
    ADD ESP,0x10                        ; 004fc61a
    MOV dword ptr [ESP + 0x14],EAX      ; 004fc61d
    FILD dword ptr [ESP + 0x14]         ; 004fc621
    FSTP float ptr [ESP + 0x10]         ; 004fc625
    JMP 0x004fc5da                      ; 004fc629
        ;   XREF to: 004fc5da (UNCONDITIONAL_JUMP)  ; LAB_004fc5da
    FLD float ptr [ESP + 0xc]           ; 004fc62b
        ;   Label: LAB_004fc62b
    FILD dword ptr [EBX + 0x68]         ; 004fc62f
    FLD1                                ; 004fc632
    FDIVRP                              ; 004fc634
    FXCH                                ; 004fc636
    FMUL ST1                            ; 004fc638
    PUSH dword ptr [EBP + 0x24]         ; 004fc63a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fc63d
    FILD dword ptr [EBX + 0x60]         ; 004fc640
    FXCH                                ; 004fc643
    FADD ST0,ST1                        ; 004fc645
    SUB ESP,0x4                         ; 004fc647
    MOV EAX,dword ptr [EAX + 0x50]      ; 004fc64a
    FSTP float ptr [ESP]                ; 004fc64d
    FLD float ptr [ESI]                 ; 004fc650
    FMULP ST2                           ; 004fc652
    FADDP                               ; 004fc654
    SUB ESP,0x4                         ; 004fc656
    MOV EDX,dword ptr [EBP + 0x14]      ; 004fc659
    FSTP float ptr [ESP]                ; 004fc65c
    PUSH EDX                            ; 004fc65f
    CALL dword ptr [EAX + 0x8]          ; 004fc660
    ADD ESP,0x10                        ; 004fc663
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fc666
    MOV dword ptr [ESI],EAX             ; 004fc66a
    MOV EAX,EDI                         ; 004fc66c
    MOV ESP,EBP                         ; 004fc66e
    POP EBP                             ; 004fc670
    POP EDI                             ; 004fc671
    POP ESI                             ; 004fc672
    POP EBX                             ; 004fc673
    RET                                 ; 004fc674

