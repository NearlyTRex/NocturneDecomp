; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_FUN_005626d0()
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005626d0
        ;   Label: core_script.cpp_FUN_005626d0
    PUSH ESI                            ; 005626d1
    PUSH EDI                            ; 005626d2
    PUSH EBP                            ; 005626d3
    SUB ESP,0x4                         ; 005626d4
    MOV ESI,dword ptr [ESP + 0x18]      ; 005626d7
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005626db
    LEA EDI,[ESI + 0x4]                 ; 005626df
    SUB ECX,ECX                         ; 005626e2
    DEC ECX                             ; 005626e4
    XOR EAX,EAX                         ; 005626e5
    SCASB.REPNE ES:EDI                  ; 005626e7
    NOT ECX                             ; 005626e9
    DEC ECX                             ; 005626eb
    LEA EDI,[ESI + 0x68]                ; 005626ec
    MOV EDX,ECX                         ; 005626ef
    SUB ECX,ECX                         ; 005626f1
    DEC ECX                             ; 005626f3
    XOR EAX,EAX                         ; 005626f4
    SCASB.REPNE ES:EDI                  ; 005626f6
    NOT ECX                             ; 005626f8
    DEC ECX                             ; 005626fa
    ADD EDX,ECX                         ; 005626fb
    MOV ECX,dword ptr [ESI + 0xcc]      ; 005626fd
    CMP EBP,ECX                         ; 00562703
    JLE 0x00562709                      ; 00562705 | LAB_00562709
        ;   XREF to: 00562709 (CONDITIONAL_JUMP)
    MOV EBP,ECX                         ; 00562707
    XOR EBX,EBX                         ; 00562709
        ;   Label: LAB_00562709
    TEST EBP,EBP                        ; 0056270b
    JLE 0x00562750                      ; 0056270d | LAB_00562750
        ;   XREF to: 00562750 (CONDITIONAL_JUMP)
    LEA ECX,[ESI + 0xd0]                ; 0056270f
    ADD ESI,0x134                       ; 00562715
    MOV dword ptr [ESP],ECX             ; 0056271b
    IMUL EDI,EBX,0x328                  ; 0056271e
        ;   Label: LAB_0056271e
    ADD EDI,dword ptr [ESP]             ; 00562724
    SUB ECX,ECX                         ; 00562727
    DEC ECX                             ; 00562729
    XOR EAX,EAX                         ; 0056272a
    SCASB.REPNE ES:EDI                  ; 0056272c
    NOT ECX                             ; 0056272e
    DEC ECX                             ; 00562730
    INC EBX                             ; 00562731
    MOV EDI,ESI                         ; 00562732
    ADD EDX,ECX                         ; 00562734
    SUB ECX,ECX                         ; 00562736
    DEC ECX                             ; 00562738
    XOR EAX,EAX                         ; 00562739
    SCASB.REPNE ES:EDI                  ; 0056273b
    NOT ECX                             ; 0056273d
    DEC ECX                             ; 0056273f
    ADD ESI,0x328                       ; 00562740
    ADD EDX,ECX                         ; 00562746
    CMP EBX,EBP                         ; 00562748
    JL 0x0056271e                       ; 0056274a | LAB_0056271e
        ;   XREF to: 0056271e (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0056274c
    MOV EAX,EDX                         ; 00562750
        ;   Label: LAB_00562750
    ADD ESP,0x4                         ; 00562752
    POP EBP                             ; 00562755
    POP EDI                             ; 00562756
    POP ESI                             ; 00562757
    POP EBX                             ; 00562758

