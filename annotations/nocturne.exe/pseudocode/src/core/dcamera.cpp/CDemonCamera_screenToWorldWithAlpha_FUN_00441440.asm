; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   input_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0 at 0050c52d
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441440
        ;   Label: core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_00441440
    PUSH EDI                            ; 00441441
    PUSH EBP                            ; 00441442
    SUB ESP,0x1c                        ; 00441443
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00441446
    MOV ECX,dword ptr [ESP + 0x30]      ; 0044144a
    MOV dword ptr [ESP + 0x18],ESI      ; 0044144e
    MOV EAX,dword ptr [ECX + 0x8]       ; 00441452
    MOV dword ptr [ESP + 0x8],EAX       ; 00441455
    MOV EAX,dword ptr [ECX]             ; 00441459
    MOV dword ptr [ESP],EAX             ; 0044145b
    MOV EDX,dword ptr [0x005ae704]      ; 0044145e | DAT_005ae704
    MOV EAX,dword ptr [ECX + 0x4]       ; 00441464
    PUSH EDX                            ; 00441467 | DAT_01b4d738
    MOV dword ptr [ESP + 0x8],EAX       ; 00441468
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0 ; 0044146c
        ;   XREF to: 004613b0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(CDemonRenderer * this_ptr)
    MOV EBX,EAX                         ; 00441471
    ADD ESP,0x4                         ; 00441473
    TEST EAX,EAX                        ; 00441476
    JNZ 0x00441530                      ; 00441478
        ;   XREF to: 00441530 (CONDITIONAL_JUMP)  ; LAB_00441530
    MOV ESI,ESP                         ; 0044147e
    LEA EDI,[EBP + 0x19c]               ; 00441480
    MOV EAX,dword ptr [ESI]             ; 00441486
    IMUL dword ptr [EDI]                ; 00441488
    MOV EBX,EAX                         ; 0044148a
    MOV ECX,EDX                         ; 0044148c
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044148e
    IMUL dword ptr [EDI + 0xc]          ; 00441491
    ADD EBX,EAX                         ; 00441494
    ADC ECX,EDX                         ; 00441496
    MOV EAX,dword ptr [ESI + 0x8]       ; 00441498
    IMUL dword ptr [EDI + 0x18]         ; 0044149b
    ADD EAX,EBX                         ; 0044149e
    ADC EDX,ECX                         ; 004414a0
    SHRD EAX,EDX,0x10                   ; 004414a2
    MOV ECX,dword ptr [EBP + 0x16c]     ; 004414a6
    MOV ESI,ESP                         ; 004414ac
    ADD ECX,EAX                         ; 004414ae
    LEA EDI,[EBP + 0x1a0]               ; 004414b0
    MOV dword ptr [ESP + 0xc],ECX       ; 004414b6
    MOV EAX,dword ptr [ESI]             ; 004414ba
    IMUL dword ptr [EDI]                ; 004414bc
    MOV EBX,EAX                         ; 004414be
    MOV ECX,EDX                         ; 004414c0
    MOV EAX,dword ptr [ESI + 0x4]       ; 004414c2
    IMUL dword ptr [EDI + 0xc]          ; 004414c5
    ADD EBX,EAX                         ; 004414c8
    ADC ECX,EDX                         ; 004414ca
    MOV EAX,dword ptr [ESI + 0x8]       ; 004414cc
    IMUL dword ptr [EDI + 0x18]         ; 004414cf
    ADD EAX,EBX                         ; 004414d2
    ADC EDX,ECX                         ; 004414d4
    SHRD EAX,EDX,0x10                   ; 004414d6
    MOV ECX,dword ptr [EBP + 0x170]     ; 004414da
    MOV ESI,ESP                         ; 004414e0
    ADD ECX,EAX                         ; 004414e2
    LEA EDI,[EBP + 0x1a4]               ; 004414e4
    MOV dword ptr [ESP + 0x10],ECX      ; 004414ea
    MOV EAX,dword ptr [ESI]             ; 004414ee
    IMUL dword ptr [EDI]                ; 004414f0
    MOV EBX,EAX                         ; 004414f2
    MOV ECX,EDX                         ; 004414f4
    MOV EAX,dword ptr [ESI + 0x4]       ; 004414f6
    IMUL dword ptr [EDI + 0xc]          ; 004414f9
    ADD EBX,EAX                         ; 004414fc
    ADC ECX,EDX                         ; 004414fe
    MOV EAX,dword ptr [ESI + 0x8]       ; 00441500
    IMUL dword ptr [EDI + 0x18]         ; 00441503
    ADD EAX,EBX                         ; 00441506
    ADC EDX,ECX                         ; 00441508
    SHRD EAX,EDX,0x10                   ; 0044150a
    MOV ECX,dword ptr [EBP + 0x174]     ; 0044150e
    ADD ECX,EAX                         ; 00441514
        ;   Label: LAB_00441514
    MOV dword ptr [ESP + 0x14],ECX      ; 00441516
    MOV EDI,dword ptr [ESP + 0x18]      ; 0044151a
    LEA ESI,[ESP + 0xc]                 ; 0044151e
    MOVSD ES:EDI,ESI                    ; 00441522
    MOVSD ES:EDI,ESI                    ; 00441523
    MOVSD ES:EDI,ESI                    ; 00441524
    MOV EAX,dword ptr [ESP + 0x18]      ; 00441525
    ADD ESP,0x1c                        ; 00441529
    POP EBP                             ; 0044152c
    POP EDI                             ; 0044152d
    POP EBX                             ; 0044152e
    RET                                 ; 0044152f
    LEA ECX,[EAX*0x4 + 0x0]             ; 00441530
        ;   Label: LAB_00441530
    ADD ECX,EBP                         ; 00441537
    MOV EDX,dword ptr [ESP]             ; 00441539
    MOV EAX,dword ptr [ECX + 0x136c]    ; 0044153c
    IMUL EDX                            ; 00441542
    SHRD EAX,EDX,0x10                   ; 00441544
    MOV EDX,dword ptr [ESP + 0x4]       ; 00441548
    MOV ESI,EAX                         ; 0044154c
    MOV EAX,dword ptr [ECX + 0x13cc]    ; 0044154e
    IMUL EDX                            ; 00441554
    SHRD EAX,EDX,0x10                   ; 00441556
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044155a
    ADD ESI,EAX                         ; 0044155e
    MOV EAX,dword ptr [ECX + 0x142c]    ; 00441560
    IMUL EDX                            ; 00441566
    SHRD EAX,EDX,0x10                   ; 00441568
    ADD ESI,EAX                         ; 0044156c
    MOV EAX,EBX                         ; 0044156e
    SHL EAX,0x2                         ; 00441570
    SUB EAX,EBX                         ; 00441573
    SHL EAX,0x2                         ; 00441575
    ADD EBP,EAX                         ; 00441578
    MOV EAX,dword ptr [EBP + 0x11ec]    ; 0044157a
    ADD EAX,ESI                         ; 00441580
    MOV EDX,dword ptr [ESP]             ; 00441582
    MOV dword ptr [ESP + 0xc],EAX       ; 00441585
    MOV EAX,dword ptr [ECX + 0x138c]    ; 00441589
    IMUL EDX                            ; 0044158f
    SHRD EAX,EDX,0x10                   ; 00441591
    MOV EDX,dword ptr [ESP + 0x4]       ; 00441595
    MOV EBX,EAX                         ; 00441599
    MOV EAX,dword ptr [ECX + 0x13ec]    ; 0044159b
    IMUL EDX                            ; 004415a1
    SHRD EAX,EDX,0x10                   ; 004415a3
    MOV EDX,dword ptr [ESP + 0x8]       ; 004415a7
    ADD EBX,EAX                         ; 004415ab
    MOV EAX,dword ptr [ECX + 0x144c]    ; 004415ad
    IMUL EDX                            ; 004415b3
    SHRD EAX,EDX,0x10                   ; 004415b5
    ADD EAX,EBX                         ; 004415b9
    MOV EBX,dword ptr [EBP + 0x11f0]    ; 004415bb
    MOV EDX,dword ptr [ESP]             ; 004415c1
    ADD EBX,EAX                         ; 004415c4
    MOV EAX,dword ptr [ECX + 0x13ac]    ; 004415c6
    MOV dword ptr [ESP + 0x10],EBX      ; 004415cc
    IMUL EDX                            ; 004415d0
    SHRD EAX,EDX,0x10                   ; 004415d2
    MOV EDX,dword ptr [ESP + 0x4]       ; 004415d6
    MOV EBX,EAX                         ; 004415da
    MOV EAX,dword ptr [ECX + 0x140c]    ; 004415dc
    IMUL EDX                            ; 004415e2
    SHRD EAX,EDX,0x10                   ; 004415e4
    MOV EDX,dword ptr [ESP + 0x8]       ; 004415e8
    ADD EBX,EAX                         ; 004415ec
    MOV EAX,dword ptr [ECX + 0x146c]    ; 004415ee
    IMUL EDX                            ; 004415f4
    SHRD EAX,EDX,0x10                   ; 004415f6
    MOV ECX,dword ptr [EBP + 0x11f4]    ; 004415fa
    ADD EAX,EBX                         ; 00441600
    JMP 0x00441514                      ; 00441602
        ;   XREF to: 00441514 (UNCONDITIONAL_JUMP)  ; LAB_00441514

