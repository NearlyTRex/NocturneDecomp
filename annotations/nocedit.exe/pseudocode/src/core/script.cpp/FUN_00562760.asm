; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_FUN_00562760()
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_FUN_00565f70 at 00566031
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562760
        ;   Label: core_script.cpp_FUN_00562760
    PUSH ESI                            ; 00562761
    PUSH EDI                            ; 00562762
    PUSH EBP                            ; 00562763
    SUB ESP,0x4                         ; 00562764
    MOV ESI,dword ptr [ESP + 0x18]      ; 00562767
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0056276b
    MOV EDX,dword ptr [ESI + 0xcc]      ; 0056276f
    CMP EBP,EDX                         ; 00562775
    JL 0x0056277c                       ; 00562777 | LAB_0056277c
        ;   XREF to: 0056277c (CONDITIONAL_JUMP)
    LEA EBP,[EDX + -0x1]                ; 00562779
    LEA EDI,[ESI + 0x4]                 ; 0056277c
        ;   Label: LAB_0056277c
    SUB ECX,ECX                         ; 0056277f
    DEC ECX                             ; 00562781
    XOR EAX,EAX                         ; 00562782
    SCASB.REPNE ES:EDI                  ; 00562784
    NOT ECX                             ; 00562786
    DEC ECX                             ; 00562788
    XOR EBX,EBX                         ; 00562789
    LEA EDI,[ESI + 0x68]                ; 0056278b
    MOV EDX,ECX                         ; 0056278e
    SUB ECX,ECX                         ; 00562790
    DEC ECX                             ; 00562792
    XOR EAX,EAX                         ; 00562793
    SCASB.REPNE ES:EDI                  ; 00562795
    NOT ECX                             ; 00562797
    DEC ECX                             ; 00562799
    ADD EDX,ECX                         ; 0056279a
    TEST EBP,EBP                        ; 0056279c
    JL 0x005627e0                       ; 0056279e | LAB_005627e0
        ;   XREF to: 005627e0 (CONDITIONAL_JUMP)
    LEA ECX,[ESI + 0xd0]                ; 005627a0
    ADD ESI,0x134                       ; 005627a6
    MOV dword ptr [ESP],ECX             ; 005627ac
    IMUL EDI,EBX,0x328                  ; 005627af
        ;   Label: LAB_005627af
    ADD EDI,dword ptr [ESP]             ; 005627b5
    SUB ECX,ECX                         ; 005627b8
    DEC ECX                             ; 005627ba
    XOR EAX,EAX                         ; 005627bb
    SCASB.REPNE ES:EDI                  ; 005627bd
    NOT ECX                             ; 005627bf
    DEC ECX                             ; 005627c1
    INC EBX                             ; 005627c2
    MOV EDI,ESI                         ; 005627c3
    ADD EDX,ECX                         ; 005627c5
    SUB ECX,ECX                         ; 005627c7
    DEC ECX                             ; 005627c9
    XOR EAX,EAX                         ; 005627ca
    SCASB.REPNE ES:EDI                  ; 005627cc
    NOT ECX                             ; 005627ce
    DEC ECX                             ; 005627d0
    ADD ESI,0x328                       ; 005627d1
    ADD EDX,ECX                         ; 005627d7
    CMP EBX,EBP                         ; 005627d9
    JLE 0x005627af                      ; 005627db | LAB_005627af
        ;   XREF to: 005627af (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 005627dd
    MOV EAX,EDX                         ; 005627e0
        ;   Label: LAB_005627e0
    ADD ESP,0x4                         ; 005627e2
    POP EBP                             ; 005627e5
    POP EDI                             ; 005627e6
    POP ESI                             ; 005627e7
    POP EBX                             ; 005627e8
    RET                                 ; 005627e9

