; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004eae80(void)
;
; Local Variables:
; undefined        Stack[-0xc94]:1  local_c94
; undefined        Stack[-0x8d4]:1  local_8d4
; undefined1       Stack[-0x8d3]:1  local_8d3
; undefined        Stack[-0x2d4]:1  local_2d4
; undefined1       Stack[-0x2d3]:1  local_2d3
; undefined        Stack[-0xd4]:1  local_d4
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   FUN_004e8f80 at 004e93cd
;   FUN_004ea280 at 004ea45d
;
; Referenced Globals:
;   void* switchdataD_004eae68 = 004ebec6
;   TerminatedCString s_core_menu_cpp_005c7955
;   TerminatedCString s_Too_many_custom_keys_005c7966
;   undefined4 DAT_005c7a4b
;   TerminatedCString s_Action_005c7a50
;   TerminatedCString s_Forward_005c7a57
;   undefined4 DAT_005c7a5f
;   TerminatedCString s_Strafe_on_005c7a64
;   TerminatedCString s_Strafe_left_005c7a6e
;   TerminatedCString s_Strafe_right_005c7a7a
;   TerminatedCString s_Turn_left_005c7a87
;   TerminatedCString s_Turn_right_005c7a91
;   TerminatedCString s_Point_up_005c7a9c
;   TerminatedCString s_Point_down_005c7aa5
;   TerminatedCString s_Quick_turn_005c7ab0
;   ... and 210 more
;
; Called Functions:
;   FUN_004032b0
;   FUN_0047cf40
;   FUN_0047cfa0
;   FUN_00482070
;   FUN_004831c0
;   FUN_004832b0
;   FUN_00483350
;   FUN_004833c0
;   FUN_00483440
;   FUN_00483450
;   FUN_004b8e60
;   FUN_004b93e0
;   FUN_004df5d0
;   FUN_004e4330
;   FUN_004e7dc0
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eae80
        ;   Label: FUN_004eae80
    PUSH EBP                            ; 004eae81
    SUB ESP,0xc8c                       ; 004eae82
    MOV EAX,[0x005fe9dc]                ; 004eae88 | DAT_005fe9dc
    CMP dword ptr [EAX + 0xd4],0x2      ; 004eae8d | DAT_01d213e0
    JNZ 0x004eaea3                      ; 004eae94
        ;   XREF to: 004eaea3 (CONDITIONAL_JUMP)  ; LAB_004eaea3
    CMP dword ptr [EAX + 0xbc],0x0      ; 004eae96 | DAT_01d213c8
    JZ 0x004ebe19                       ; 004eae9d
        ;   XREF to: 004ebe19 (CONDITIONAL_JUMP)  ; LAB_004ebe19
    PUSH EDI                            ; 004eaea3
        ;   Label: LAB_004eaea3
    PUSH ESI                            ; 004eaea4
    XOR EBX,EBX                         ; 004eaea5
    MOV dword ptr [ESP + 0xc90],EBX     ; 004eaea7
    MOV EAX,[0x005fe9dc]                ; 004eaeae | DAT_005fe9dc
        ;   Label: LAB_004eaeae
    XOR ESI,ESI                         ; 004eaeb3
    MOV EDI,dword ptr [EAX + 0xd4]      ; 004eaeb5 | DAT_01d213e0
    MOV dword ptr [0x01d75c98],ESI      ; 004eaebb | DAT_01d75c98
    CMP EDI,0x3                         ; 004eaec1
    JZ 0x004eb4cf                       ; 004eaec4
        ;   XREF to: 004eb4cf (CONDITIONAL_JUMP)  ; LAB_004eb4cf
    PUSH 0x5c7a4b                       ; 004eaeca | DAT_005c7a4b
    CALL FUN_00508960                   ; 004eaecf
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EBX,dword ptr [0x005fe9dc]      ; 004eaed4 | DAT_005fe9dc
    MOV EBP,dword ptr [0x01d75c98]      ; 004eaeda | DAT_01d75c98
    ADD ESP,0x4                         ; 004eaee0
    MOV ESI,EAX                         ; 004eaee3
    ADD EBX,0x48                        ; 004eaee5
    CMP EBP,0x20                        ; 004eaee8
    JL 0x004eaf0f                       ; 004eaeeb
        ;   XREF to: 004eaf0f (CONDITIONAL_JUMP)  ; LAB_004eaf0f
    MOV EAX,0x5c7955                    ; 004eaeed | = "..\\core\\menu.cpp"
    MOV EDX,0x8f5                       ; 004eaef2
    PUSH 0x5c7966                       ; 004eaef7 | = "Too many custom keys!"
    MOV [0x01d71de0],EAX                ; 004eaefc | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 004eaf01 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eaf07
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eaf0c
    MOV EAX,[0x01d75c98]                ; 004eaf0f | DAT_01d75c98
        ;   Label: LAB_004eaf0f
    IMUL EDI,EAX,0x28                   ; 004eaf14
    ADD EDI,0x1d75d20                   ; 004eaf17
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eaf1d | DAT_01d75c9c | DAT_01d21354
    PUSH EDI                            ; 004eaf24
    MOV AL,byte ptr [ESI]               ; 004eaf25
        ;   Label: LAB_004eaf25
    MOV byte ptr [EDI],AL               ; 004eaf27
    CMP AL,0x0                          ; 004eaf29
    JZ 0x004eaf3d                       ; 004eaf2b
        ;   XREF to: 004eaf3d (CONDITIONAL_JUMP)  ; LAB_004eaf3d
    MOV AL,byte ptr [ESI + 0x1]         ; 004eaf2d
    ADD ESI,0x2                         ; 004eaf30
    MOV byte ptr [EDI + 0x1],AL         ; 004eaf33
    ADD EDI,0x2                         ; 004eaf36
    CMP AL,0x0                          ; 004eaf39
    JNZ 0x004eaf25                      ; 004eaf3b
        ;   XREF to: 004eaf25 (CONDITIONAL_JUMP)  ; LAB_004eaf25
    POP EDI                             ; 004eaf3d
        ;   Label: LAB_004eaf3d
    MOV EBX,dword ptr [0x01d75c98]      ; 004eaf3e | DAT_01d75c98
    INC EBX                             ; 004eaf44
    PUSH 0x5c7a50                       ; 004eaf45 | = "Action"
    MOV dword ptr [0x01d75c98],EBX      ; 004eaf4a | DAT_01d75c98
    CALL FUN_00508960                   ; 004eaf50
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EBX,dword ptr [0x005fe9dc]      ; 004eaf55 | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eaf5b | DAT_01d75c98
    ADD ESP,0x4                         ; 004eaf61
    MOV ESI,EAX                         ; 004eaf64
    ADD EBX,0x4c                        ; 004eaf66
    CMP EDI,0x20                        ; 004eaf69
    JL 0x004eaf90                       ; 004eaf6c
        ;   XREF to: 004eaf90 (CONDITIONAL_JUMP)  ; LAB_004eaf90
    MOV EBP,0x5c7955                    ; 004eaf6e | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eaf73
    PUSH 0x5c7966                       ; 004eaf78 | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004eaf7d | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004eaf83 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eaf88
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eaf8d
    MOV EAX,[0x01d75c98]                ; 004eaf90 | DAT_01d75c98
        ;   Label: LAB_004eaf90
    IMUL EDI,EAX,0x28                   ; 004eaf95
    ADD EDI,0x1d75d20                   ; 004eaf98
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eaf9e | DAT_01d75ca0 | DAT_01d21358
    PUSH EDI                            ; 004eafa5 | DAT_01d75d48
    MOV AL,byte ptr [ESI]               ; 004eafa6
        ;   Label: LAB_004eafa6
    MOV byte ptr [EDI],AL               ; 004eafa8 | DAT_01d75d48 | DAT_01d75d4a
    CMP AL,0x0                          ; 004eafaa
    JZ 0x004eafbe                       ; 004eafac
        ;   XREF to: 004eafbe (CONDITIONAL_JUMP)  ; LAB_004eafbe
    MOV AL,byte ptr [ESI + 0x1]         ; 004eafae
    ADD ESI,0x2                         ; 004eafb1
    MOV byte ptr [EDI + 0x1],AL         ; 004eafb4 | DAT_01d75d49 | DAT_01d75d4b
    ADD EDI,0x2                         ; 004eafb7
    CMP AL,0x0                          ; 004eafba
    JNZ 0x004eafa6                      ; 004eafbc
        ;   XREF to: 004eafa6 (CONDITIONAL_JUMP)  ; LAB_004eafa6
    POP EDI                             ; 004eafbe
        ;   Label: LAB_004eafbe
    MOV ECX,dword ptr [0x01d75c98]      ; 004eafbf | DAT_01d75c98
    INC ECX                             ; 004eafc5
    PUSH 0x5c7a57                       ; 004eafc6 | = "Forward"
    MOV dword ptr [0x01d75c98],ECX      ; 004eafcb | DAT_01d75c98
    CALL FUN_00508960                   ; 004eafd1
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EBX,dword ptr [0x005fe9dc]      ; 004eafd6 | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eafdc | DAT_01d75c98
    ADD ESP,0x4                         ; 004eafe2
    MOV ESI,EAX                         ; 004eafe5
    ADD EBX,0x28                        ; 004eafe7
    CMP EDI,0x20                        ; 004eafea
    JL 0x004eb011                       ; 004eafed
        ;   XREF to: 004eb011 (CONDITIONAL_JUMP)  ; LAB_004eb011
    MOV EBP,0x5c7955                    ; 004eafef | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eaff4
    PUSH 0x5c7966                       ; 004eaff9 | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004eaffe | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004eb004 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eb009
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eb00e
    MOV EAX,[0x01d75c98]                ; 004eb011 | DAT_01d75c98
        ;   Label: LAB_004eb011
    IMUL EDI,EAX,0x28                   ; 004eb016
    ADD EDI,0x1d75d20                   ; 004eb019
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eb01f | DAT_01d75ca4
    PUSH EDI                            ; 004eb026 | DAT_01d75d70
    MOV AL,byte ptr [ESI]               ; 004eb027
        ;   Label: LAB_004eb027
    MOV byte ptr [EDI],AL               ; 004eb029 | DAT_01d75d70 | DAT_01d75d72
    CMP AL,0x0                          ; 004eb02b
    JZ 0x004eb03f                       ; 004eb02d
        ;   XREF to: 004eb03f (CONDITIONAL_JUMP)  ; LAB_004eb03f
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb02f
    ADD ESI,0x2                         ; 004eb032
    MOV byte ptr [EDI + 0x1],AL         ; 004eb035 | DAT_01d75d71 | DAT_01d75d73
    ADD EDI,0x2                         ; 004eb038
    CMP AL,0x0                          ; 004eb03b
    JNZ 0x004eb027                      ; 004eb03d
        ;   XREF to: 004eb027 (CONDITIONAL_JUMP)  ; LAB_004eb027
    POP EDI                             ; 004eb03f
        ;   Label: LAB_004eb03f
    MOV ECX,dword ptr [0x01d75c98]      ; 004eb040 | DAT_01d75c98
    INC ECX                             ; 004eb046
    PUSH 0x5c7a5f                       ; 004eb047 | DAT_005c7a5f
    MOV dword ptr [0x01d75c98],ECX      ; 004eb04c | DAT_01d75c98
    CALL FUN_00508960                   ; 004eb052
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EBX,dword ptr [0x005fe9dc]      ; 004eb057 | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eb05d | DAT_01d75c98
    ADD ESP,0x4                         ; 004eb063
    MOV ESI,EAX                         ; 004eb066
    ADD EBX,0x2c                        ; 004eb068
    CMP EDI,0x20                        ; 004eb06b
    JL 0x004eb092                       ; 004eb06e
        ;   XREF to: 004eb092 (CONDITIONAL_JUMP)  ; LAB_004eb092
    MOV EBP,0x5c7955                    ; 004eb070 | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eb075
    PUSH 0x5c7966                       ; 004eb07a | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004eb07f | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004eb085 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eb08a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eb08f
    MOV EAX,[0x01d75c98]                ; 004eb092 | DAT_01d75c98
        ;   Label: LAB_004eb092
    IMUL EDI,EAX,0x28                   ; 004eb097
    ADD EDI,0x1d75d20                   ; 004eb09a
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eb0a0 | DAT_01d75ca8
    PUSH EDI                            ; 004eb0a7 | DAT_01d75d98
    MOV AL,byte ptr [ESI]               ; 004eb0a8
        ;   Label: LAB_004eb0a8
    MOV byte ptr [EDI],AL               ; 004eb0aa | DAT_01d75d98 | DAT_01d75d9a
    CMP AL,0x0                          ; 004eb0ac
    JZ 0x004eb0c0                       ; 004eb0ae
        ;   XREF to: 004eb0c0 (CONDITIONAL_JUMP)  ; LAB_004eb0c0
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb0b0
    ADD ESI,0x2                         ; 004eb0b3
    MOV byte ptr [EDI + 0x1],AL         ; 004eb0b6 | DAT_01d75d99 | DAT_01d75d9b
    ADD EDI,0x2                         ; 004eb0b9
    CMP AL,0x0                          ; 004eb0bc
    JNZ 0x004eb0a8                      ; 004eb0be
        ;   XREF to: 004eb0a8 (CONDITIONAL_JUMP)  ; LAB_004eb0a8
    POP EDI                             ; 004eb0c0
        ;   Label: LAB_004eb0c0
    MOV ECX,dword ptr [0x01d75c98]      ; 004eb0c1 | DAT_01d75c98
    INC ECX                             ; 004eb0c7
    PUSH 0x5c7a64                       ; 004eb0c8 | = "Strafe on"
    MOV dword ptr [0x01d75c98],ECX      ; 004eb0cd | DAT_01d75c98
    CALL FUN_00508960                   ; 004eb0d3
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EBX,dword ptr [0x005fe9dc]      ; 004eb0d8 | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eb0de | DAT_01d75c98
    ADD ESP,0x4                         ; 004eb0e4
    MOV ESI,EAX                         ; 004eb0e7
    ADD EBX,0x34                        ; 004eb0e9
    CMP EDI,0x20                        ; 004eb0ec
    JL 0x004eb113                       ; 004eb0ef
        ;   XREF to: 004eb113 (CONDITIONAL_JUMP)  ; LAB_004eb113
    MOV EBP,0x5c7955                    ; 004eb0f1 | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eb0f6
    PUSH 0x5c7966                       ; 004eb0fb | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004eb100 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004eb106 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eb10b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eb110
    MOV EAX,[0x01d75c98]                ; 004eb113 | DAT_01d75c98
        ;   Label: LAB_004eb113
    IMUL EDI,EAX,0x28                   ; 004eb118
    ADD EDI,0x1d75d20                   ; 004eb11b
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eb121 | DAT_01d75cac
    PUSH EDI                            ; 004eb128 | DAT_01d75dc0
    MOV AL,byte ptr [ESI]               ; 004eb129
        ;   Label: LAB_004eb129
    MOV byte ptr [EDI],AL               ; 004eb12b | DAT_01d75dc0 | DAT_01d75dc2
    CMP AL,0x0                          ; 004eb12d
    JZ 0x004eb141                       ; 004eb12f
        ;   XREF to: 004eb141 (CONDITIONAL_JUMP)  ; LAB_004eb141
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb131
    ADD ESI,0x2                         ; 004eb134
    MOV byte ptr [EDI + 0x1],AL         ; 004eb137 | DAT_01d75dc1 | DAT_01d75dc3
    ADD EDI,0x2                         ; 004eb13a
    CMP AL,0x0                          ; 004eb13d
    JNZ 0x004eb129                      ; 004eb13f
        ;   XREF to: 004eb129 (CONDITIONAL_JUMP)  ; LAB_004eb129
    POP EDI                             ; 004eb141
        ;   Label: LAB_004eb141
    MOV ECX,dword ptr [0x01d75c98]      ; 004eb142 | DAT_01d75c98
    INC ECX                             ; 004eb148
    PUSH 0x5c7a6e                       ; 004eb149 | = "Strafe left"
    MOV dword ptr [0x01d75c98],ECX      ; 004eb14e | DAT_01d75c98
    CALL FUN_00508960                   ; 004eb154
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EBX,dword ptr [0x005fe9dc]      ; 004eb159 | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eb15f | DAT_01d75c98
    ADD ESP,0x4                         ; 004eb165
    MOV ESI,EAX                         ; 004eb168
    ADD EBX,0x38                        ; 004eb16a
    CMP EDI,0x20                        ; 004eb16d
    JL 0x004eb194                       ; 004eb170
        ;   XREF to: 004eb194 (CONDITIONAL_JUMP)  ; LAB_004eb194
    MOV EBP,0x5c7955                    ; 004eb172 | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eb177
    PUSH 0x5c7966                       ; 004eb17c | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004eb181 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004eb187 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eb18c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eb191
    MOV EAX,[0x01d75c98]                ; 004eb194 | DAT_01d75c98
        ;   Label: LAB_004eb194
    IMUL EDI,EAX,0x28                   ; 004eb199
    ADD EDI,0x1d75d20                   ; 004eb19c
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eb1a2 | DAT_01d75cb0
    PUSH EDI                            ; 004eb1a9 | DAT_01d75de8
    MOV AL,byte ptr [ESI]               ; 004eb1aa
        ;   Label: LAB_004eb1aa
    MOV byte ptr [EDI],AL               ; 004eb1ac | DAT_01d75de8 | DAT_01d75dea
    CMP AL,0x0                          ; 004eb1ae
    JZ 0x004eb1c2                       ; 004eb1b0
        ;   XREF to: 004eb1c2 (CONDITIONAL_JUMP)  ; LAB_004eb1c2
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb1b2
    ADD ESI,0x2                         ; 004eb1b5
    MOV byte ptr [EDI + 0x1],AL         ; 004eb1b8 | DAT_01d75de9 | DAT_01d75deb
    ADD EDI,0x2                         ; 004eb1bb
    CMP AL,0x0                          ; 004eb1be
    JNZ 0x004eb1aa                      ; 004eb1c0
        ;   XREF to: 004eb1aa (CONDITIONAL_JUMP)  ; LAB_004eb1aa
    POP EDI                             ; 004eb1c2
        ;   Label: LAB_004eb1c2
    MOV ECX,dword ptr [0x01d75c98]      ; 004eb1c3 | DAT_01d75c98
    INC ECX                             ; 004eb1c9
    PUSH 0x5c7a7a                       ; 004eb1ca | = "Strafe right"
    MOV dword ptr [0x01d75c98],ECX      ; 004eb1cf | DAT_01d75c98
    CALL FUN_00508960                   ; 004eb1d5
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EBX,dword ptr [0x005fe9dc]      ; 004eb1da | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eb1e0 | DAT_01d75c98
    ADD ESP,0x4                         ; 004eb1e6
    MOV ESI,EAX                         ; 004eb1e9
    ADD EBX,0x3c                        ; 004eb1eb
    CMP EDI,0x20                        ; 004eb1ee
    JL 0x004eb215                       ; 004eb1f1
        ;   XREF to: 004eb215 (CONDITIONAL_JUMP)  ; LAB_004eb215
    MOV EBP,0x5c7955                    ; 004eb1f3 | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eb1f8
    PUSH 0x5c7966                       ; 004eb1fd | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004eb202 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004eb208 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eb20d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eb212
    MOV EAX,[0x01d75c98]                ; 004eb215 | DAT_01d75c98
        ;   Label: LAB_004eb215
    IMUL EDI,EAX,0x28                   ; 004eb21a
    ADD EDI,0x1d75d20                   ; 004eb21d
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eb223 | DAT_01d75cb4
    PUSH EDI                            ; 004eb22a | DAT_01d75e10
    MOV AL,byte ptr [ESI]               ; 004eb22b
        ;   Label: LAB_004eb22b
    MOV byte ptr [EDI],AL               ; 004eb22d | DAT_01d75e10 | DAT_01d75e12
    CMP AL,0x0                          ; 004eb22f
    JZ 0x004eb243                       ; 004eb231
        ;   XREF to: 004eb243 (CONDITIONAL_JUMP)  ; LAB_004eb243
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb233
    ADD ESI,0x2                         ; 004eb236
    MOV byte ptr [EDI + 0x1],AL         ; 004eb239 | DAT_01d75e11 | DAT_01d75e13
    ADD EDI,0x2                         ; 004eb23c
    CMP AL,0x0                          ; 004eb23f
    JNZ 0x004eb22b                      ; 004eb241
        ;   XREF to: 004eb22b (CONDITIONAL_JUMP)  ; LAB_004eb22b
    POP EDI                             ; 004eb243
        ;   Label: LAB_004eb243
    MOV ECX,dword ptr [0x01d75c98]      ; 004eb244 | DAT_01d75c98
    INC ECX                             ; 004eb24a
    PUSH 0x5c7a87                       ; 004eb24b | = "Turn left"
    MOV dword ptr [0x01d75c98],ECX      ; 004eb250 | DAT_01d75c98
    CALL FUN_00508960                   ; 004eb256
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EBX,dword ptr [0x005fe9dc]      ; 004eb25b | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eb261 | DAT_01d75c98
    ADD ESP,0x4                         ; 004eb267
    MOV ESI,EAX                         ; 004eb26a
    ADD EBX,0x44                        ; 004eb26c
    CMP EDI,0x20                        ; 004eb26f
    JL 0x004eb296                       ; 004eb272
        ;   XREF to: 004eb296 (CONDITIONAL_JUMP)  ; LAB_004eb296
    MOV EBP,0x5c7955                    ; 004eb274 | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eb279
    PUSH 0x5c7966                       ; 004eb27e | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004eb283 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004eb289 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eb28e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eb293
    MOV EAX,[0x01d75c98]                ; 004eb296 | DAT_01d75c98
        ;   Label: LAB_004eb296
    IMUL EDI,EAX,0x28                   ; 004eb29b
    ADD EDI,0x1d75d20                   ; 004eb29e
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eb2a4 | DAT_01d75cb8
    PUSH EDI                            ; 004eb2ab | DAT_01d75e38
    MOV AL,byte ptr [ESI]               ; 004eb2ac
        ;   Label: LAB_004eb2ac
    MOV byte ptr [EDI],AL               ; 004eb2ae | DAT_01d75e38 | DAT_01d75e3a
    CMP AL,0x0                          ; 004eb2b0
    JZ 0x004eb2c4                       ; 004eb2b2
        ;   XREF to: 004eb2c4 (CONDITIONAL_JUMP)  ; LAB_004eb2c4
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb2b4
    ADD ESI,0x2                         ; 004eb2b7
    MOV byte ptr [EDI + 0x1],AL         ; 004eb2ba | DAT_01d75e39 | DAT_01d75e3b
    ADD EDI,0x2                         ; 004eb2bd
    CMP AL,0x0                          ; 004eb2c0
    JNZ 0x004eb2ac                      ; 004eb2c2
        ;   XREF to: 004eb2ac (CONDITIONAL_JUMP)  ; LAB_004eb2ac
    POP EDI                             ; 004eb2c4
        ;   Label: LAB_004eb2c4
    MOV ECX,dword ptr [0x01d75c98]      ; 004eb2c5 | DAT_01d75c98
    INC ECX                             ; 004eb2cb
    PUSH 0x5c7a91                       ; 004eb2cc | = "Turn right"
    MOV dword ptr [0x01d75c98],ECX      ; 004eb2d1 | DAT_01d75c98
    CALL FUN_00508960                   ; 004eb2d7
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EDX,dword ptr [0x005fe9dc]      ; 004eb2dc | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eb2e2 | DAT_01d75c98
    ADD ESP,0x4                         ; 004eb2e8
    MOV ESI,EAX                         ; 004eb2eb
    LEA EBX,[EDX + 0x40]                ; 004eb2ed
    CMP EDI,0x20                        ; 004eb2f0
    JL 0x004eb317                       ; 004eb2f3
        ;   XREF to: 004eb317 (CONDITIONAL_JUMP)  ; LAB_004eb317
    MOV EBP,0x5c7955                    ; 004eb2f5 | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eb2fa
    PUSH 0x5c7966                       ; 004eb2ff | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004eb304 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004eb30a | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eb30f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eb314
    MOV EAX,[0x01d75c98]                ; 004eb317 | DAT_01d75c98
        ;   Label: LAB_004eb317
    IMUL EDI,EAX,0x28                   ; 004eb31c
    ADD EDI,0x1d75d20                   ; 004eb31f
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eb325 | DAT_01d75cbc
    PUSH EDI                            ; 004eb32c | DAT_01d75e60
    MOV AL,byte ptr [ESI]               ; 004eb32d
        ;   Label: LAB_004eb32d
    MOV byte ptr [EDI],AL               ; 004eb32f | DAT_01d75e60 | DAT_01d75e62
    CMP AL,0x0                          ; 004eb331
    JZ 0x004eb345                       ; 004eb333
        ;   XREF to: 004eb345 (CONDITIONAL_JUMP)  ; LAB_004eb345
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb335
    ADD ESI,0x2                         ; 004eb338
    MOV byte ptr [EDI + 0x1],AL         ; 004eb33b | DAT_01d75e61 | DAT_01d75e63
    ADD EDI,0x2                         ; 004eb33e
    CMP AL,0x0                          ; 004eb341
    JNZ 0x004eb32d                      ; 004eb343
        ;   XREF to: 004eb32d (CONDITIONAL_JUMP)  ; LAB_004eb32d
    POP EDI                             ; 004eb345
        ;   Label: LAB_004eb345
    MOV ECX,dword ptr [0x01d75c98]      ; 004eb346 | DAT_01d75c98
    INC ECX                             ; 004eb34c
    PUSH 0x5c7a9c                       ; 004eb34d | = "Point up"
    MOV dword ptr [0x01d75c98],ECX      ; 004eb352 | DAT_01d75c98
    CALL FUN_00508960                   ; 004eb358
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EBX,dword ptr [0x005fe9dc]      ; 004eb35d | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eb363 | DAT_01d75c98
    ADD ESP,0x4                         ; 004eb369
    MOV ESI,EAX                         ; 004eb36c
    ADD EBX,0x78                        ; 004eb36e
    CMP EDI,0x20                        ; 004eb371
    JL 0x004eb398                       ; 004eb374
        ;   XREF to: 004eb398 (CONDITIONAL_JUMP)  ; LAB_004eb398
    MOV EBP,0x5c7955                    ; 004eb376 | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eb37b
    PUSH 0x5c7966                       ; 004eb380 | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004eb385 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004eb38b | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eb390
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eb395
    MOV EAX,[0x01d75c98]                ; 004eb398 | DAT_01d75c98
        ;   Label: LAB_004eb398
    IMUL EDI,EAX,0x28                   ; 004eb39d
    ADD EDI,0x1d75d20                   ; 004eb3a0
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eb3a6 | DAT_01d75cc0
    PUSH EDI                            ; 004eb3ad | DAT_01d75e88
    MOV AL,byte ptr [ESI]               ; 004eb3ae
        ;   Label: LAB_004eb3ae
    MOV byte ptr [EDI],AL               ; 004eb3b0 | DAT_01d75e88 | DAT_01d75e8a
    CMP AL,0x0                          ; 004eb3b2
    JZ 0x004eb3c6                       ; 004eb3b4
        ;   XREF to: 004eb3c6 (CONDITIONAL_JUMP)  ; LAB_004eb3c6
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb3b6
    ADD ESI,0x2                         ; 004eb3b9
    MOV byte ptr [EDI + 0x1],AL         ; 004eb3bc | DAT_01d75e89 | DAT_01d75e8b
    ADD EDI,0x2                         ; 004eb3bf
    CMP AL,0x0                          ; 004eb3c2
    JNZ 0x004eb3ae                      ; 004eb3c4
        ;   XREF to: 004eb3ae (CONDITIONAL_JUMP)  ; LAB_004eb3ae
    POP EDI                             ; 004eb3c6
        ;   Label: LAB_004eb3c6
    MOV ECX,dword ptr [0x01d75c98]      ; 004eb3c7 | DAT_01d75c98
    INC ECX                             ; 004eb3cd
    PUSH 0x5c7aa5                       ; 004eb3ce | = "Point down"
    MOV dword ptr [0x01d75c98],ECX      ; 004eb3d3 | DAT_01d75c98
    CALL FUN_00508960                   ; 004eb3d9
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EBX,dword ptr [0x005fe9dc]      ; 004eb3de | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eb3e4 | DAT_01d75c98
    ADD ESP,0x4                         ; 004eb3ea
    MOV ESI,EAX                         ; 004eb3ed
    ADD EBX,0x7c                        ; 004eb3ef
    CMP EDI,0x20                        ; 004eb3f2
    JL 0x004eb419                       ; 004eb3f5
        ;   XREF to: 004eb419 (CONDITIONAL_JUMP)  ; LAB_004eb419
    MOV EBP,0x5c7955                    ; 004eb3f7 | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eb3fc
    PUSH 0x5c7966                       ; 004eb401 | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004eb406 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004eb40c | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eb411
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eb416
    MOV EAX,[0x01d75c98]                ; 004eb419 | DAT_01d75c98
        ;   Label: LAB_004eb419
    IMUL EDI,EAX,0x28                   ; 004eb41e
    ADD EDI,0x1d75d20                   ; 004eb421
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eb427 | DAT_01d75cc4
    PUSH EDI                            ; 004eb42e | DAT_01d75eb0
    MOV AL,byte ptr [ESI]               ; 004eb42f
        ;   Label: LAB_004eb42f
    MOV byte ptr [EDI],AL               ; 004eb431 | DAT_01d75eb0 | DAT_01d75eb2
    CMP AL,0x0                          ; 004eb433
    JZ 0x004eb447                       ; 004eb435
        ;   XREF to: 004eb447 (CONDITIONAL_JUMP)  ; LAB_004eb447
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb437
    ADD ESI,0x2                         ; 004eb43a
    MOV byte ptr [EDI + 0x1],AL         ; 004eb43d | DAT_01d75eb1 | DAT_01d75eb3
    ADD EDI,0x2                         ; 004eb440
    CMP AL,0x0                          ; 004eb443
    JNZ 0x004eb42f                      ; 004eb445
        ;   XREF to: 004eb42f (CONDITIONAL_JUMP)  ; LAB_004eb42f
    POP EDI                             ; 004eb447
        ;   Label: LAB_004eb447
    MOV ECX,dword ptr [0x01d75c98]      ; 004eb448 | DAT_01d75c98
    INC ECX                             ; 004eb44e
    PUSH 0x5c7ab0                       ; 004eb44f | = "Quick turn"
    MOV dword ptr [0x01d75c98],ECX      ; 004eb454 | DAT_01d75c98
    CALL FUN_00508960                   ; 004eb45a
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EBX,dword ptr [0x005fe9dc]      ; 004eb45f | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eb465 | DAT_01d75c98
    ADD ESP,0x4                         ; 004eb46b
    MOV ESI,EAX                         ; 004eb46e
    ADD EBX,0x74                        ; 004eb470
    CMP EDI,0x20                        ; 004eb473
    JL 0x004eb49a                       ; 004eb476
        ;   XREF to: 004eb49a (CONDITIONAL_JUMP)  ; LAB_004eb49a
    MOV EBP,0x5c7955                    ; 004eb478 | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eb47d
    PUSH 0x5c7966                       ; 004eb482 | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004eb487 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004eb48d | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eb492
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eb497
    MOV EAX,[0x01d75c98]                ; 004eb49a | DAT_01d75c98
        ;   Label: LAB_004eb49a
    IMUL EDI,EAX,0x28                   ; 004eb49f
    ADD EDI,0x1d75d20                   ; 004eb4a2
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eb4a8 | DAT_01d75cc8
    PUSH EDI                            ; 004eb4af | DAT_01d75ed8
    MOV AL,byte ptr [ESI]               ; 004eb4b0
        ;   Label: LAB_004eb4b0
    MOV byte ptr [EDI],AL               ; 004eb4b2 | DAT_01d75ed8 | DAT_01d75eda
    CMP AL,0x0                          ; 004eb4b4
    JZ 0x004eb4c8                       ; 004eb4b6
        ;   XREF to: 004eb4c8 (CONDITIONAL_JUMP)  ; LAB_004eb4c8
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb4b8
    ADD ESI,0x2                         ; 004eb4bb
    MOV byte ptr [EDI + 0x1],AL         ; 004eb4be | DAT_01d75ed9 | DAT_01d75edb
    ADD EDI,0x2                         ; 004eb4c1
    CMP AL,0x0                          ; 004eb4c4
    JNZ 0x004eb4b0                      ; 004eb4c6
        ;   XREF to: 004eb4b0 (CONDITIONAL_JUMP)  ; LAB_004eb4b0
    POP EDI                             ; 004eb4c8
        ;   Label: LAB_004eb4c8
    INC dword ptr [0x01d75c98]          ; 004eb4c9 | DAT_01d75c98
    MOV EAX,[0x005fe9dc]                ; 004eb4cf | DAT_005fe9dc
        ;   Label: LAB_004eb4cf
    CMP dword ptr [EAX + 0xb0],0x0      ; 004eb4d4 | DAT_01d213bc
    JZ 0x004ebe2f                       ; 004eb4db
        ;   XREF to: 004ebe2f (CONDITIONAL_JUMP)  ; LAB_004ebe2f
    PUSH 0x5c7abb                       ; 004eb4e1 | DAT_005c7abb
    CALL FUN_00508960                   ; 004eb4e6
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
        ;   Label: LAB_004eb4e6
    MOV EBX,dword ptr [0x005fe9dc]      ; 004eb4eb | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eb4f1 | DAT_01d75c98
    ADD ESP,0x4                         ; 004eb4f7
    MOV ESI,EAX                         ; 004eb4fa
    ADD EBX,0x30                        ; 004eb4fc
    CMP EDI,0x20                        ; 004eb4ff
    JL 0x004eb526                       ; 004eb502
        ;   XREF to: 004eb526 (CONDITIONAL_JUMP)  ; LAB_004eb526
    MOV EBP,0x5c7955                    ; 004eb504 | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eb509
    PUSH 0x5c7966                       ; 004eb50e | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004eb513 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004eb519 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eb51e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eb523
    MOV EAX,[0x01d75c98]                ; 004eb526 | DAT_01d75c98
        ;   Label: LAB_004eb526
    IMUL EDI,EAX,0x28                   ; 004eb52b
    ADD EDI,0x1d75d20                   ; 004eb52e
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eb534 | DAT_01d75ccc | DAT_01d75c9c
    PUSH EDI                            ; 004eb53b
    MOV AL,byte ptr [ESI]               ; 004eb53c
        ;   Label: LAB_004eb53c
    MOV byte ptr [EDI],AL               ; 004eb53e | DAT_01d75f00
    CMP AL,0x0                          ; 004eb540
    JZ 0x004eb554                       ; 004eb542
        ;   XREF to: 004eb554 (CONDITIONAL_JUMP)  ; LAB_004eb554
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb544
    ADD ESI,0x2                         ; 004eb547
    MOV byte ptr [EDI + 0x1],AL         ; 004eb54a | DAT_01d75f01
    ADD EDI,0x2                         ; 004eb54d
    CMP AL,0x0                          ; 004eb550
    JNZ 0x004eb53c                      ; 004eb552
        ;   XREF to: 004eb53c (CONDITIONAL_JUMP)  ; LAB_004eb53c
    POP EDI                             ; 004eb554
        ;   Label: LAB_004eb554
    INC dword ptr [0x01d75c98]          ; 004eb555 | DAT_01d75c98
    PUSH 0x5c7ac4                       ; 004eb55b | = "Use item"
    CALL FUN_00508960                   ; 004eb560
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EBX,dword ptr [0x005fe9dc]      ; 004eb565 | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eb56b | DAT_01d75c98
    ADD ESP,0x4                         ; 004eb571
    MOV ESI,EAX                         ; 004eb574
    ADD EBX,0x50                        ; 004eb576
    CMP EDI,0x20                        ; 004eb579
    JL 0x004eb5a0                       ; 004eb57c
        ;   XREF to: 004eb5a0 (CONDITIONAL_JUMP)  ; LAB_004eb5a0
    MOV EBP,0x5c7955                    ; 004eb57e | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eb583
    PUSH 0x5c7966                       ; 004eb588 | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004eb58d | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004eb593 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eb598
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eb59d
    MOV EAX,[0x01d75c98]                ; 004eb5a0 | DAT_01d75c98
        ;   Label: LAB_004eb5a0
    IMUL EDI,EAX,0x28                   ; 004eb5a5
    ADD EDI,0x1d75d20                   ; 004eb5a8
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eb5ae | DAT_01d75cd0 | DAT_01d2135c
    PUSH EDI                            ; 004eb5b5 | DAT_01d75f28
    MOV AL,byte ptr [ESI]               ; 004eb5b6
        ;   Label: LAB_004eb5b6
    MOV byte ptr [EDI],AL               ; 004eb5b8 | DAT_01d75f28 | DAT_01d75f2a
    CMP AL,0x0                          ; 004eb5ba
    JZ 0x004eb5ce                       ; 004eb5bc
        ;   XREF to: 004eb5ce (CONDITIONAL_JUMP)  ; LAB_004eb5ce
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb5be
    ADD ESI,0x2                         ; 004eb5c1
    MOV byte ptr [EDI + 0x1],AL         ; 004eb5c4 | DAT_01d75f29 | DAT_01d75f2b
    ADD EDI,0x2                         ; 004eb5c7
    CMP AL,0x0                          ; 004eb5ca
    JNZ 0x004eb5b6                      ; 004eb5cc
        ;   XREF to: 004eb5b6 (CONDITIONAL_JUMP)  ; LAB_004eb5b6
    POP EDI                             ; 004eb5ce
        ;   Label: LAB_004eb5ce
    MOV ECX,dword ptr [0x01d75c98]      ; 004eb5cf | DAT_01d75c98
    INC ECX                             ; 004eb5d5
    PUSH 0x5c7acd                       ; 004eb5d6 | = "Lantern"
    MOV dword ptr [0x01d75c98],ECX      ; 004eb5db | DAT_01d75c98
    CALL FUN_00508960                   ; 004eb5e1
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EBX,dword ptr [0x005fe9dc]      ; 004eb5e6 | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eb5ec | DAT_01d75c98
    ADD ESP,0x4                         ; 004eb5f2
    MOV ESI,EAX                         ; 004eb5f5
    ADD EBX,0x54                        ; 004eb5f7
    CMP EDI,0x20                        ; 004eb5fa
    JL 0x004eb621                       ; 004eb5fd
        ;   XREF to: 004eb621 (CONDITIONAL_JUMP)  ; LAB_004eb621
    MOV EBP,0x5c7955                    ; 004eb5ff | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eb604
    PUSH 0x5c7966                       ; 004eb609 | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004eb60e | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004eb614 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eb619
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eb61e
    MOV EAX,[0x01d75c98]                ; 004eb621 | DAT_01d75c98
        ;   Label: LAB_004eb621
    IMUL EDI,EAX,0x28                   ; 004eb626
    ADD EDI,0x1d75d20                   ; 004eb629
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eb62f | DAT_01d75cd4 | DAT_01d21360
    PUSH EDI                            ; 004eb636 | DAT_01d75f50
    MOV AL,byte ptr [ESI]               ; 004eb637
        ;   Label: LAB_004eb637
    MOV byte ptr [EDI],AL               ; 004eb639 | DAT_01d75f50 | DAT_01d75f52
    CMP AL,0x0                          ; 004eb63b
    JZ 0x004eb64f                       ; 004eb63d
        ;   XREF to: 004eb64f (CONDITIONAL_JUMP)  ; LAB_004eb64f
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb63f
    ADD ESI,0x2                         ; 004eb642
    MOV byte ptr [EDI + 0x1],AL         ; 004eb645 | DAT_01d75f51 | DAT_01d75f53
    ADD EDI,0x2                         ; 004eb648
    CMP AL,0x0                          ; 004eb64b
    JNZ 0x004eb637                      ; 004eb64d
        ;   XREF to: 004eb637 (CONDITIONAL_JUMP)  ; LAB_004eb637
    POP EDI                             ; 004eb64f
        ;   Label: LAB_004eb64f
    MOV ECX,dword ptr [0x01d75c98]      ; 004eb650 | DAT_01d75c98
    INC ECX                             ; 004eb656
    PUSH 0x5c7ad5                       ; 004eb657 | = "Journal"
    MOV dword ptr [0x01d75c98],ECX      ; 004eb65c | DAT_01d75c98
    CALL FUN_00508960                   ; 004eb662
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EBX,dword ptr [0x005fe9dc]      ; 004eb667 | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eb66d | DAT_01d75c98
    ADD ESP,0x4                         ; 004eb673
    MOV ESI,EAX                         ; 004eb676
    ADD EBX,0x5c                        ; 004eb678
    CMP EDI,0x20                        ; 004eb67b
    JL 0x004eb6a2                       ; 004eb67e
        ;   XREF to: 004eb6a2 (CONDITIONAL_JUMP)  ; LAB_004eb6a2
    MOV EBP,0x5c7955                    ; 004eb680 | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eb685
    PUSH 0x5c7966                       ; 004eb68a | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004eb68f | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004eb695 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eb69a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eb69f
    MOV EAX,[0x01d75c98]                ; 004eb6a2 | DAT_01d75c98
        ;   Label: LAB_004eb6a2
    IMUL EDI,EAX,0x28                   ; 004eb6a7
    ADD EDI,0x1d75d20                   ; 004eb6aa
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eb6b0 | DAT_01d75cd8
    PUSH EDI                            ; 004eb6b7 | DAT_01d75f78
    MOV AL,byte ptr [ESI]               ; 004eb6b8
        ;   Label: LAB_004eb6b8
    MOV byte ptr [EDI],AL               ; 004eb6ba | DAT_01d75f78 | DAT_01d75f7a
    CMP AL,0x0                          ; 004eb6bc
    JZ 0x004eb6d0                       ; 004eb6be
        ;   XREF to: 004eb6d0 (CONDITIONAL_JUMP)  ; LAB_004eb6d0
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb6c0
    ADD ESI,0x2                         ; 004eb6c3
    MOV byte ptr [EDI + 0x1],AL         ; 004eb6c6 | DAT_01d75f79 | DAT_01d75f7b
    ADD EDI,0x2                         ; 004eb6c9
    CMP AL,0x0                          ; 004eb6cc
    JNZ 0x004eb6b8                      ; 004eb6ce
        ;   XREF to: 004eb6b8 (CONDITIONAL_JUMP)  ; LAB_004eb6b8
    POP EDI                             ; 004eb6d0
        ;   Label: LAB_004eb6d0
    MOV ECX,dword ptr [0x01d75c98]      ; 004eb6d1 | DAT_01d75c98
    INC ECX                             ; 004eb6d7
    PUSH 0x5c7add                       ; 004eb6d8 | DAT_005c7add
    MOV dword ptr [0x01d75c98],ECX      ; 004eb6dd | DAT_01d75c98
    CALL FUN_00508960                   ; 004eb6e3
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EBX,dword ptr [0x005fe9dc]      ; 004eb6e8 | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eb6ee | DAT_01d75c98
    ADD ESP,0x4                         ; 004eb6f4
    MOV ESI,EAX                         ; 004eb6f7
    ADD EBX,0x60                        ; 004eb6f9
    CMP EDI,0x20                        ; 004eb6fc
    JL 0x004eb723                       ; 004eb6ff
        ;   XREF to: 004eb723 (CONDITIONAL_JUMP)  ; LAB_004eb723
    MOV EBP,0x5c7955                    ; 004eb701 | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eb706
    PUSH 0x5c7966                       ; 004eb70b | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004eb710 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004eb716 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eb71b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eb720
    MOV EAX,[0x01d75c98]                ; 004eb723 | DAT_01d75c98
        ;   Label: LAB_004eb723
    IMUL EDI,EAX,0x28                   ; 004eb728
    ADD EDI,0x1d75d20                   ; 004eb72b
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eb731 | DAT_01d75cdc
    PUSH EDI                            ; 004eb738 | DAT_01d75fa0
    MOV AL,byte ptr [ESI]               ; 004eb739
        ;   Label: LAB_004eb739
    MOV byte ptr [EDI],AL               ; 004eb73b | DAT_01d75fa0 | DAT_01d75fa2
    CMP AL,0x0                          ; 004eb73d
    JZ 0x004eb751                       ; 004eb73f
        ;   XREF to: 004eb751 (CONDITIONAL_JUMP)  ; LAB_004eb751
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb741
    ADD ESI,0x2                         ; 004eb744
    MOV byte ptr [EDI + 0x1],AL         ; 004eb747 | DAT_01d75fa1 | DAT_01d75fa3
    ADD EDI,0x2                         ; 004eb74a
    CMP AL,0x0                          ; 004eb74d
    JNZ 0x004eb739                      ; 004eb74f
        ;   XREF to: 004eb739 (CONDITIONAL_JUMP)  ; LAB_004eb739
    POP EDI                             ; 004eb751
        ;   Label: LAB_004eb751
    MOV ECX,dword ptr [0x01d75c98]      ; 004eb752 | DAT_01d75c98
    INC ECX                             ; 004eb758
    PUSH 0x5c7ae1                       ; 004eb759 | = "Voodoo Doll"
    MOV dword ptr [0x01d75c98],ECX      ; 004eb75e | DAT_01d75c98
    CALL FUN_00508960                   ; 004eb764
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EBX,dword ptr [0x005fe9dc]      ; 004eb769 | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eb76f | DAT_01d75c98
    ADD ESP,0x4                         ; 004eb775
    MOV ESI,EAX                         ; 004eb778
    ADD EBX,0x68                        ; 004eb77a
    CMP EDI,0x20                        ; 004eb77d
    JL 0x004eb7a4                       ; 004eb780
        ;   XREF to: 004eb7a4 (CONDITIONAL_JUMP)  ; LAB_004eb7a4
    MOV EBP,0x5c7955                    ; 004eb782 | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eb787
    PUSH 0x5c7966                       ; 004eb78c | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004eb791 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004eb797 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eb79c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eb7a1
    MOV EAX,[0x01d75c98]                ; 004eb7a4 | DAT_01d75c98
        ;   Label: LAB_004eb7a4
    IMUL EDI,EAX,0x28                   ; 004eb7a9
    ADD EDI,0x1d75d20                   ; 004eb7ac
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eb7b2 | DAT_01d75ce0
    PUSH EDI                            ; 004eb7b9 | DAT_01d75fc8
    MOV AL,byte ptr [ESI]               ; 004eb7ba
        ;   Label: LAB_004eb7ba
    MOV byte ptr [EDI],AL               ; 004eb7bc | DAT_01d75fc8 | DAT_01d75fca
    CMP AL,0x0                          ; 004eb7be
    JZ 0x004eb7d2                       ; 004eb7c0
        ;   XREF to: 004eb7d2 (CONDITIONAL_JUMP)  ; LAB_004eb7d2
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb7c2
    ADD ESI,0x2                         ; 004eb7c5
    MOV byte ptr [EDI + 0x1],AL         ; 004eb7c8 | DAT_01d75fc9 | DAT_01d75fcb
    ADD EDI,0x2                         ; 004eb7cb
    CMP AL,0x0                          ; 004eb7ce
    JNZ 0x004eb7ba                      ; 004eb7d0
        ;   XREF to: 004eb7ba (CONDITIONAL_JUMP)  ; LAB_004eb7ba
    POP EDI                             ; 004eb7d2
        ;   Label: LAB_004eb7d2
    MOV ECX,dword ptr [0x01d75c98]      ; 004eb7d3 | DAT_01d75c98
    INC ECX                             ; 004eb7d9
    PUSH 0x5c7aed                       ; 004eb7da | DAT_005c7aed
    MOV dword ptr [0x01d75c98],ECX      ; 004eb7df | DAT_01d75c98
    CALL FUN_00508960                   ; 004eb7e5
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EBX,dword ptr [0x005fe9dc]      ; 004eb7ea | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eb7f0 | DAT_01d75c98
    ADD ESP,0x4                         ; 004eb7f6
    MOV ESI,EAX                         ; 004eb7f9
    ADD EBX,0x6c                        ; 004eb7fb
    CMP EDI,0x20                        ; 004eb7fe
    JL 0x004eb825                       ; 004eb801
        ;   XREF to: 004eb825 (CONDITIONAL_JUMP)  ; LAB_004eb825
    MOV EBP,0x5c7955                    ; 004eb803 | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eb808
    PUSH 0x5c7966                       ; 004eb80d | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004eb812 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004eb818 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eb81d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eb822
    MOV EAX,[0x01d75c98]                ; 004eb825 | DAT_01d75c98
        ;   Label: LAB_004eb825
    IMUL EDI,EAX,0x28                   ; 004eb82a
    ADD EDI,0x1d75d20                   ; 004eb82d
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eb833 | DAT_01d75ce4
    PUSH EDI                            ; 004eb83a | DAT_01d75ff0
    MOV AL,byte ptr [ESI]               ; 004eb83b
        ;   Label: LAB_004eb83b
    MOV byte ptr [EDI],AL               ; 004eb83d | DAT_01d75ff0 | DAT_01d75ff2
    CMP AL,0x0                          ; 004eb83f
    JZ 0x004eb853                       ; 004eb841
        ;   XREF to: 004eb853 (CONDITIONAL_JUMP)  ; LAB_004eb853
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb843
    ADD ESI,0x2                         ; 004eb846
    MOV byte ptr [EDI + 0x1],AL         ; 004eb849 | DAT_01d75ff1 | DAT_01d75ff3
    ADD EDI,0x2                         ; 004eb84c
    CMP AL,0x0                          ; 004eb84f
    JNZ 0x004eb83b                      ; 004eb851
        ;   XREF to: 004eb83b (CONDITIONAL_JUMP)  ; LAB_004eb83b
    POP EDI                             ; 004eb853
        ;   Label: LAB_004eb853
    MOV ECX,dword ptr [0x01d75c98]      ; 004eb854 | DAT_01d75c98
    INC ECX                             ; 004eb85a
    PUSH 0x5c7af2                       ; 004eb85b | = "Select conventional weapons"
    MOV dword ptr [0x01d75c98],ECX      ; 004eb860 | DAT_01d75c98
    CALL FUN_00508960                   ; 004eb866
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EBX,dword ptr [0x005fe9dc]      ; 004eb86b | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eb871 | DAT_01d75c98
    ADD ESP,0x4                         ; 004eb877
    MOV ESI,EAX                         ; 004eb87a
    ADD EBX,0x80                        ; 004eb87c
    CMP EDI,0x20                        ; 004eb882
    JL 0x004eb8a9                       ; 004eb885
        ;   XREF to: 004eb8a9 (CONDITIONAL_JUMP)  ; LAB_004eb8a9
    MOV EBP,0x5c7955                    ; 004eb887 | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eb88c
    PUSH 0x5c7966                       ; 004eb891 | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004eb896 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004eb89c | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eb8a1
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eb8a6
    MOV EAX,[0x01d75c98]                ; 004eb8a9 | DAT_01d75c98
        ;   Label: LAB_004eb8a9
    IMUL EDI,EAX,0x28                   ; 004eb8ae
    ADD EDI,0x1d75d20                   ; 004eb8b1
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eb8b7 | DAT_01d75ce8
    PUSH EDI                            ; 004eb8be | DAT_01d76018
    MOV AL,byte ptr [ESI]               ; 004eb8bf
        ;   Label: LAB_004eb8bf
    MOV byte ptr [EDI],AL               ; 004eb8c1 | DAT_01d76018 | DAT_01d7601a
    CMP AL,0x0                          ; 004eb8c3
    JZ 0x004eb8d7                       ; 004eb8c5
        ;   XREF to: 004eb8d7 (CONDITIONAL_JUMP)  ; LAB_004eb8d7
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb8c7
    ADD ESI,0x2                         ; 004eb8ca
    MOV byte ptr [EDI + 0x1],AL         ; 004eb8cd | DAT_01d76019 | DAT_01d7601b
    ADD EDI,0x2                         ; 004eb8d0
    CMP AL,0x0                          ; 004eb8d3
    JNZ 0x004eb8bf                      ; 004eb8d5
        ;   XREF to: 004eb8bf (CONDITIONAL_JUMP)  ; LAB_004eb8bf
    POP EDI                             ; 004eb8d7
        ;   Label: LAB_004eb8d7
    MOV ECX,dword ptr [0x01d75c98]      ; 004eb8d8 | DAT_01d75c98
    INC ECX                             ; 004eb8de
    PUSH 0x5c7b0e                       ; 004eb8df | = "Select staves"
    MOV dword ptr [0x01d75c98],ECX      ; 004eb8e4 | DAT_01d75c98
    CALL FUN_00508960                   ; 004eb8ea
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EBX,dword ptr [0x005fe9dc]      ; 004eb8ef | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eb8f5 | DAT_01d75c98
    ADD ESP,0x4                         ; 004eb8fb
    MOV ESI,EAX                         ; 004eb8fe
    ADD EBX,0x84                        ; 004eb900
    CMP EDI,0x20                        ; 004eb906
    JL 0x004eb92d                       ; 004eb909
        ;   XREF to: 004eb92d (CONDITIONAL_JUMP)  ; LAB_004eb92d
    MOV EBP,0x5c7955                    ; 004eb90b | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eb910
    PUSH 0x5c7966                       ; 004eb915 | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004eb91a | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004eb920 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eb925
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eb92a
    MOV EAX,[0x01d75c98]                ; 004eb92d | DAT_01d75c98
        ;   Label: LAB_004eb92d
    IMUL EDI,EAX,0x28                   ; 004eb932
    ADD EDI,0x1d75d20                   ; 004eb935
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eb93b | DAT_01d75cec
    PUSH EDI                            ; 004eb942 | DAT_01d76040
    MOV AL,byte ptr [ESI]               ; 004eb943
        ;   Label: LAB_004eb943
    MOV byte ptr [EDI],AL               ; 004eb945 | DAT_01d76040 | DAT_01d76042
    CMP AL,0x0                          ; 004eb947
    JZ 0x004eb95b                       ; 004eb949
        ;   XREF to: 004eb95b (CONDITIONAL_JUMP)  ; LAB_004eb95b
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb94b
    ADD ESI,0x2                         ; 004eb94e
    MOV byte ptr [EDI + 0x1],AL         ; 004eb951 | DAT_01d76041 | DAT_01d76043
    ADD EDI,0x2                         ; 004eb954
    CMP AL,0x0                          ; 004eb957
    JNZ 0x004eb943                      ; 004eb959
        ;   XREF to: 004eb943 (CONDITIONAL_JUMP)  ; LAB_004eb943
    POP EDI                             ; 004eb95b
        ;   Label: LAB_004eb95b
    MOV ECX,dword ptr [0x01d75c98]      ; 004eb95c | DAT_01d75c98
    INC ECX                             ; 004eb962
    PUSH 0x5c7b1c                       ; 004eb963 | = "Select Christian weapons"
    MOV dword ptr [0x01d75c98],ECX      ; 004eb968 | DAT_01d75c98
    CALL FUN_00508960                   ; 004eb96e
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EBX,dword ptr [0x005fe9dc]      ; 004eb973 | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eb979 | DAT_01d75c98
    ADD ESP,0x4                         ; 004eb97f
    MOV ESI,EAX                         ; 004eb982
    ADD EBX,0x88                        ; 004eb984
    CMP EDI,0x20                        ; 004eb98a
    JL 0x004eb9b1                       ; 004eb98d
        ;   XREF to: 004eb9b1 (CONDITIONAL_JUMP)  ; LAB_004eb9b1
    MOV EBP,0x5c7955                    ; 004eb98f | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eb994
    PUSH 0x5c7966                       ; 004eb999 | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004eb99e | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004eb9a4 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eb9a9
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eb9ae
    MOV EAX,[0x01d75c98]                ; 004eb9b1 | DAT_01d75c98
        ;   Label: LAB_004eb9b1
    IMUL EDI,EAX,0x28                   ; 004eb9b6
    ADD EDI,0x1d75d20                   ; 004eb9b9
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eb9bf | DAT_01d75cf0
    PUSH EDI                            ; 004eb9c6 | DAT_01d76068
    MOV AL,byte ptr [ESI]               ; 004eb9c7
        ;   Label: LAB_004eb9c7
    MOV byte ptr [EDI],AL               ; 004eb9c9 | DAT_01d76068 | DAT_01d7606a
    CMP AL,0x0                          ; 004eb9cb
    JZ 0x004eb9df                       ; 004eb9cd
        ;   XREF to: 004eb9df (CONDITIONAL_JUMP)  ; LAB_004eb9df
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb9cf
    ADD ESI,0x2                         ; 004eb9d2
    MOV byte ptr [EDI + 0x1],AL         ; 004eb9d5 | DAT_01d76069 | DAT_01d7606b
    ADD EDI,0x2                         ; 004eb9d8
    CMP AL,0x0                          ; 004eb9db
    JNZ 0x004eb9c7                      ; 004eb9dd
        ;   XREF to: 004eb9c7 (CONDITIONAL_JUMP)  ; LAB_004eb9c7
    POP EDI                             ; 004eb9df
        ;   Label: LAB_004eb9df
    MOV ECX,dword ptr [0x01d75c98]      ; 004eb9e0 | DAT_01d75c98
    INC ECX                             ; 004eb9e6
    PUSH 0x5c7b35                       ; 004eb9e7 | = "Select Shaman weapons"
    MOV dword ptr [0x01d75c98],ECX      ; 004eb9ec | DAT_01d75c98
    CALL FUN_00508960                   ; 004eb9f2
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EDX,dword ptr [0x005fe9dc]      ; 004eb9f7 | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eb9fd | DAT_01d75c98
    ADD ESP,0x4                         ; 004eba03
    MOV ESI,EAX                         ; 004eba06
    LEA EBX,[EDX + 0x8c]                ; 004eba08
    CMP EDI,0x20                        ; 004eba0e
    JL 0x004eba35                       ; 004eba11
        ;   XREF to: 004eba35 (CONDITIONAL_JUMP)  ; LAB_004eba35
    MOV EBP,0x5c7955                    ; 004eba13 | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eba18
    PUSH 0x5c7966                       ; 004eba1d | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004eba22 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004eba28 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004eba2d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004eba32
    MOV EAX,[0x01d75c98]                ; 004eba35 | DAT_01d75c98
        ;   Label: LAB_004eba35
    IMUL EDI,EAX,0x28                   ; 004eba3a
    ADD EDI,0x1d75d20                   ; 004eba3d
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004eba43 | DAT_01d75cf4
    PUSH EDI                            ; 004eba4a | DAT_01d76090
    MOV AL,byte ptr [ESI]               ; 004eba4b
        ;   Label: LAB_004eba4b
    MOV byte ptr [EDI],AL               ; 004eba4d | DAT_01d76090 | DAT_01d76092
    CMP AL,0x0                          ; 004eba4f
    JZ 0x004eba63                       ; 004eba51
        ;   XREF to: 004eba63 (CONDITIONAL_JUMP)  ; LAB_004eba63
    MOV AL,byte ptr [ESI + 0x1]         ; 004eba53
    ADD ESI,0x2                         ; 004eba56
    MOV byte ptr [EDI + 0x1],AL         ; 004eba59 | DAT_01d76091 | DAT_01d76093
    ADD EDI,0x2                         ; 004eba5c
    CMP AL,0x0                          ; 004eba5f
    JNZ 0x004eba4b                      ; 004eba61
        ;   XREF to: 004eba4b (CONDITIONAL_JUMP)  ; LAB_004eba4b
    POP EDI                             ; 004eba63
        ;   Label: LAB_004eba63
    MOV ECX,dword ptr [0x01d75c98]      ; 004eba64 | DAT_01d75c98
    INC ECX                             ; 004eba6a
    PUSH 0x5c7b4b                       ; 004eba6b | = "Select Pagan weapons"
    MOV dword ptr [0x01d75c98],ECX      ; 004eba70 | DAT_01d75c98
    CALL FUN_00508960                   ; 004eba76
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EBX,dword ptr [0x005fe9dc]      ; 004eba7b | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004eba81 | DAT_01d75c98
    ADD ESP,0x4                         ; 004eba87
    MOV ESI,EAX                         ; 004eba8a
    ADD EBX,0x90                        ; 004eba8c
    CMP EDI,0x20                        ; 004eba92
    JL 0x004ebab9                       ; 004eba95
        ;   XREF to: 004ebab9 (CONDITIONAL_JUMP)  ; LAB_004ebab9
    MOV EBP,0x5c7955                    ; 004eba97 | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004eba9c
    PUSH 0x5c7966                       ; 004ebaa1 | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004ebaa6 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004ebaac | DAT_01d71de4
    CALL FUN_004e4330                   ; 004ebab1
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004ebab6
    MOV EAX,[0x01d75c98]                ; 004ebab9 | DAT_01d75c98
        ;   Label: LAB_004ebab9
    IMUL EDI,EAX,0x28                   ; 004ebabe
    ADD EDI,0x1d75d20                   ; 004ebac1
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004ebac7 | DAT_01d75cf8
    PUSH EDI                            ; 004ebace | DAT_01d760b8
    MOV AL,byte ptr [ESI]               ; 004ebacf
        ;   Label: LAB_004ebacf
    MOV byte ptr [EDI],AL               ; 004ebad1 | DAT_01d760b8 | DAT_01d760ba
    CMP AL,0x0                          ; 004ebad3
    JZ 0x004ebae7                       ; 004ebad5
        ;   XREF to: 004ebae7 (CONDITIONAL_JUMP)  ; LAB_004ebae7
    MOV AL,byte ptr [ESI + 0x1]         ; 004ebad7
    ADD ESI,0x2                         ; 004ebada
    MOV byte ptr [EDI + 0x1],AL         ; 004ebadd | DAT_01d760b9 | DAT_01d760bb
    ADD EDI,0x2                         ; 004ebae0
    CMP AL,0x0                          ; 004ebae3
    JNZ 0x004ebacf                      ; 004ebae5
        ;   XREF to: 004ebacf (CONDITIONAL_JUMP)  ; LAB_004ebacf
    POP EDI                             ; 004ebae7
        ;   Label: LAB_004ebae7
    MOV ECX,dword ptr [0x01d75c98]      ; 004ebae8 | DAT_01d75c98
    INC ECX                             ; 004ebaee
    PUSH 0x5c7b60                       ; 004ebaef | = "Next weapon"
    MOV dword ptr [0x01d75c98],ECX      ; 004ebaf4 | DAT_01d75c98
    CALL FUN_00508960                   ; 004ebafa
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EDX,dword ptr [0x005fe9dc]      ; 004ebaff | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004ebb05 | DAT_01d75c98
    ADD ESP,0x4                         ; 004ebb0b
    MOV ESI,EAX                         ; 004ebb0e
    LEA EBX,[EDX + 0x94]                ; 004ebb10
    CMP EDI,0x20                        ; 004ebb16
    JL 0x004ebb3d                       ; 004ebb19
        ;   XREF to: 004ebb3d (CONDITIONAL_JUMP)  ; LAB_004ebb3d
    MOV EBP,0x5c7955                    ; 004ebb1b | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004ebb20
    PUSH 0x5c7966                       ; 004ebb25 | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004ebb2a | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004ebb30 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004ebb35
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004ebb3a
    MOV EAX,[0x01d75c98]                ; 004ebb3d | DAT_01d75c98
        ;   Label: LAB_004ebb3d
    IMUL EDI,EAX,0x28                   ; 004ebb42
    ADD EDI,0x1d75d20                   ; 004ebb45
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004ebb4b | DAT_01d75cfc | DAT_01d213a0
    PUSH EDI                            ; 004ebb52 | DAT_01d760e0
    MOV AL,byte ptr [ESI]               ; 004ebb53
        ;   Label: LAB_004ebb53
    MOV byte ptr [EDI],AL               ; 004ebb55 | DAT_01d760e0 | DAT_01d760e2
    CMP AL,0x0                          ; 004ebb57
    JZ 0x004ebb6b                       ; 004ebb59
        ;   XREF to: 004ebb6b (CONDITIONAL_JUMP)  ; LAB_004ebb6b
    MOV AL,byte ptr [ESI + 0x1]         ; 004ebb5b
    ADD ESI,0x2                         ; 004ebb5e
    MOV byte ptr [EDI + 0x1],AL         ; 004ebb61 | DAT_01d760e1 | DAT_01d760e3
    ADD EDI,0x2                         ; 004ebb64
    CMP AL,0x0                          ; 004ebb67
    JNZ 0x004ebb53                      ; 004ebb69
        ;   XREF to: 004ebb53 (CONDITIONAL_JUMP)  ; LAB_004ebb53
    POP EDI                             ; 004ebb6b
        ;   Label: LAB_004ebb6b
    MOV ECX,dword ptr [0x01d75c98]      ; 004ebb6c | DAT_01d75c98
    INC ECX                             ; 004ebb72
    PUSH 0x5c7b6c                       ; 004ebb73 | = "Previous weapon"
    MOV dword ptr [0x01d75c98],ECX      ; 004ebb78 | DAT_01d75c98
    CALL FUN_00508960                   ; 004ebb7e
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EDX,dword ptr [0x005fe9dc]      ; 004ebb83 | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004ebb89 | DAT_01d75c98
    ADD ESP,0x4                         ; 004ebb8f
    MOV ESI,EAX                         ; 004ebb92
    LEA EBX,[EDX + 0x98]                ; 004ebb94
    CMP EDI,0x20                        ; 004ebb9a
    JL 0x004ebbc1                       ; 004ebb9d
        ;   XREF to: 004ebbc1 (CONDITIONAL_JUMP)  ; LAB_004ebbc1
    MOV EBP,0x5c7955                    ; 004ebb9f | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004ebba4
    PUSH 0x5c7966                       ; 004ebba9 | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004ebbae | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004ebbb4 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004ebbb9
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004ebbbe
    MOV EAX,[0x01d75c98]                ; 004ebbc1 | DAT_01d75c98
        ;   Label: LAB_004ebbc1
    IMUL EDI,EAX,0x28                   ; 004ebbc6
    ADD EDI,0x1d75d20                   ; 004ebbc9
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004ebbcf | DAT_01d75d00 | DAT_01d213a4
    PUSH EDI                            ; 004ebbd6 | DAT_01d76108
    MOV AL,byte ptr [ESI]               ; 004ebbd7
        ;   Label: LAB_004ebbd7
    MOV byte ptr [EDI],AL               ; 004ebbd9 | DAT_01d76108 | DAT_01d7610a
    CMP AL,0x0                          ; 004ebbdb
    JZ 0x004ebbef                       ; 004ebbdd
        ;   XREF to: 004ebbef (CONDITIONAL_JUMP)  ; LAB_004ebbef
    MOV AL,byte ptr [ESI + 0x1]         ; 004ebbdf
    ADD ESI,0x2                         ; 004ebbe2
    MOV byte ptr [EDI + 0x1],AL         ; 004ebbe5 | DAT_01d76109 | DAT_01d7610b
    ADD EDI,0x2                         ; 004ebbe8
    CMP AL,0x0                          ; 004ebbeb
    JNZ 0x004ebbd7                      ; 004ebbed
        ;   XREF to: 004ebbd7 (CONDITIONAL_JUMP)  ; LAB_004ebbd7
    POP EDI                             ; 004ebbef
        ;   Label: LAB_004ebbef
    MOV ECX,dword ptr [0x01d75c98]      ; 004ebbf0 | DAT_01d75c98
    INC ECX                             ; 004ebbf6
    PUSH 0x5c7b7c                       ; 004ebbf7 | = "Next item"
    MOV dword ptr [0x01d75c98],ECX      ; 004ebbfc | DAT_01d75c98
    CALL FUN_00508960                   ; 004ebc02
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EDX,dword ptr [0x005fe9dc]      ; 004ebc07 | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004ebc0d | DAT_01d75c98
    ADD ESP,0x4                         ; 004ebc13
    MOV ESI,EAX                         ; 004ebc16
    LEA EBX,[EDX + 0x9c]                ; 004ebc18
    CMP EDI,0x20                        ; 004ebc1e
    JL 0x004ebc45                       ; 004ebc21
        ;   XREF to: 004ebc45 (CONDITIONAL_JUMP)  ; LAB_004ebc45
    MOV EBP,0x5c7955                    ; 004ebc23 | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004ebc28
    PUSH 0x5c7966                       ; 004ebc2d | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004ebc32 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004ebc38 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004ebc3d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004ebc42
    MOV EAX,[0x01d75c98]                ; 004ebc45 | DAT_01d75c98
        ;   Label: LAB_004ebc45
    IMUL EDI,EAX,0x28                   ; 004ebc4a
    ADD EDI,0x1d75d20                   ; 004ebc4d
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004ebc53 | DAT_01d75d04 | DAT_01d213a8
    PUSH EDI                            ; 004ebc5a | DAT_01d76130
    MOV AL,byte ptr [ESI]               ; 004ebc5b
        ;   Label: LAB_004ebc5b
    MOV byte ptr [EDI],AL               ; 004ebc5d | DAT_01d76130 | DAT_01d76132
    CMP AL,0x0                          ; 004ebc5f
    JZ 0x004ebc73                       ; 004ebc61
        ;   XREF to: 004ebc73 (CONDITIONAL_JUMP)  ; LAB_004ebc73
    MOV AL,byte ptr [ESI + 0x1]         ; 004ebc63
    ADD ESI,0x2                         ; 004ebc66
    MOV byte ptr [EDI + 0x1],AL         ; 004ebc69 | DAT_01d76131 | DAT_01d76133
    ADD EDI,0x2                         ; 004ebc6c
    CMP AL,0x0                          ; 004ebc6f
    JNZ 0x004ebc5b                      ; 004ebc71
        ;   XREF to: 004ebc5b (CONDITIONAL_JUMP)  ; LAB_004ebc5b
    POP EDI                             ; 004ebc73
        ;   Label: LAB_004ebc73
    MOV ECX,dword ptr [0x01d75c98]      ; 004ebc74 | DAT_01d75c98
    INC ECX                             ; 004ebc7a
    PUSH 0x5c7b86                       ; 004ebc7b | = "Previous item"
    MOV dword ptr [0x01d75c98],ECX      ; 004ebc80 | DAT_01d75c98
    CALL FUN_00508960                   ; 004ebc86
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    MOV EDX,dword ptr [0x005fe9dc]      ; 004ebc8b | DAT_005fe9dc
    MOV EDI,dword ptr [0x01d75c98]      ; 004ebc91 | DAT_01d75c98
    ADD ESP,0x4                         ; 004ebc97
    MOV ESI,EAX                         ; 004ebc9a
    LEA EBX,[EDX + 0xa0]                ; 004ebc9c
    CMP EDI,0x20                        ; 004ebca2
    JL 0x004ebcc9                       ; 004ebca5
        ;   XREF to: 004ebcc9 (CONDITIONAL_JUMP)  ; LAB_004ebcc9
    MOV EBP,0x5c7955                    ; 004ebca7 | = "..\\core\\menu.cpp"
    MOV EAX,0x8f5                       ; 004ebcac
    PUSH 0x5c7966                       ; 004ebcb1 | = "Too many custom keys!"
    MOV dword ptr [0x01d71de0],EBP      ; 004ebcb6 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004ebcbc | DAT_01d71de4
    CALL FUN_004e4330                   ; 004ebcc1
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004ebcc6
    MOV EAX,[0x01d75c98]                ; 004ebcc9 | DAT_01d75c98
        ;   Label: LAB_004ebcc9
    IMUL EDI,EAX,0x28                   ; 004ebcce
    ADD EDI,0x1d75d20                   ; 004ebcd1
    MOV dword ptr [EAX*0x4 + 0x1d75c9c],EBX ; 004ebcd7 | DAT_01d75d08 | DAT_01d213ac
    PUSH EDI                            ; 004ebcde | DAT_01d76158
    MOV AL,byte ptr [ESI]               ; 004ebcdf
        ;   Label: LAB_004ebcdf
    MOV byte ptr [EDI],AL               ; 004ebce1 | DAT_01d76158 | DAT_01d7615a
    CMP AL,0x0                          ; 004ebce3
    JZ 0x004ebcf7                       ; 004ebce5
        ;   XREF to: 004ebcf7 (CONDITIONAL_JUMP)  ; LAB_004ebcf7
    MOV AL,byte ptr [ESI + 0x1]         ; 004ebce7
    ADD ESI,0x2                         ; 004ebcea
    MOV byte ptr [EDI + 0x1],AL         ; 004ebced | DAT_01d76159 | DAT_01d7615b
    ADD EDI,0x2                         ; 004ebcf0
    CMP AL,0x0                          ; 004ebcf3
    JNZ 0x004ebcdf                      ; 004ebcf5
        ;   XREF to: 004ebcdf (CONDITIONAL_JUMP)  ; LAB_004ebcdf
    POP EDI                             ; 004ebcf7
        ;   Label: LAB_004ebcf7
    INC dword ptr [0x01d75c98]          ; 004ebcf8 | DAT_01d75c98
    CALL FUN_00560d70                   ; 004ebcfe
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00560d70()
    CALL FUN_0057a8a0                   ; 004ebd03
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a8a0()
    LEA EAX,[ESP + 0x8]                 ; 004ebd08
    PUSH EAX                            ; 004ebd0c
    CALL FUN_004831c0                   ; 004ebd0d
        ;   XREF to: 004831c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004831c0()
    ADD ESP,0x4                         ; 004ebd12
    PUSH 0x5c7b94                       ; 004ebd15 | = "Restore defaults"
    CALL FUN_00508960                   ; 004ebd1a
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ebd1f
    PUSH EAX                            ; 004ebd22
    LEA EAX,[ESP + 0xc]                 ; 004ebd23
    PUSH EAX                            ; 004ebd27
    XOR ESI,ESI                         ; 004ebd28
    CALL FUN_00482070                   ; 004ebd2a
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; undefined FUN_00482070()
    MOV EBX,dword ptr [0x01d75c98]      ; 004ebd2f | DAT_01d75c98
    ADD ESP,0x8                         ; 004ebd35
    TEST EBX,EBX                        ; 004ebd38
    JLE 0x004ebd90                      ; 004ebd3a
        ;   XREF to: 004ebd90 (CONDITIONAL_JUMP)  ; LAB_004ebd90
    MOV EDI,0x1d75d20                   ; 004ebd3c
    XOR EBX,EBX                         ; 004ebd41
    MOV EAX,dword ptr [EBX + 0x1d75c9c] ; 004ebd43 | DAT_01d75c9c | DAT_01d75ca0
        ;   Label: LAB_004ebd43
    MOV EBP,dword ptr [EAX]             ; 004ebd49 | DAT_01d21354 | DAT_01d21358
    PUSH EBP                            ; 004ebd4b
    CALL FUN_004eaa60                   ; 004ebd4c
        ;   XREF to: 004eaa60 (UNCONDITIONAL_CALL)  ; undefined FUN_004eaa60()
    ADD ESP,0x4                         ; 004ebd51
    PUSH EAX                            ; 004ebd54
    PUSH EDI                            ; 004ebd55
    PUSH 0x5c7ba5                       ; 004ebd56 | = "%s\t%s"
    LEA EAX,[ESP + 0xbd4]               ; 004ebd5b
    PUSH EAX                            ; 004ebd62
    CALL FUN_005a28c0                   ; 004ebd63
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 004ebd68
    LEA EAX,[ESP + 0xbc8]               ; 004ebd6b
    PUSH EAX                            ; 004ebd72
    LEA EAX,[ESP + 0xc]                 ; 004ebd73
    ADD EBX,0x4                         ; 004ebd77
    PUSH EAX                            ; 004ebd7a
    INC ESI                             ; 004ebd7b
    ADD EDI,0x28                        ; 004ebd7c
    CALL FUN_00482070                   ; 004ebd7f
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; undefined FUN_00482070()
    MOV EAX,[0x01d75c98]                ; 004ebd84 | DAT_01d75c98
    ADD ESP,0x8                         ; 004ebd89
    CMP ESI,EAX                         ; 004ebd8c
    JL 0x004ebd43                       ; 004ebd8e
        ;   XREF to: 004ebd43 (CONDITIONAL_JUMP)  ; LAB_004ebd43
    PUSH 0x5c7bab                       ; 004ebd90 | = "Select"
        ;   Label: LAB_004ebd90
    LEA EAX,[ESP + 0xc]                 ; 004ebd95
    PUSH EAX                            ; 004ebd99
    CALL FUN_00483350                   ; 004ebd9a
        ;   XREF to: 00483350 (UNCONDITIONAL_CALL)  ; undefined FUN_00483350()
    ADD ESP,0x8                         ; 004ebd9f
    PUSH 0x5c7bb2                       ; 004ebda2 | = "Close"
    LEA EAX,[ESP + 0xc]                 ; 004ebda7
    PUSH EAX                            ; 004ebdab
    CALL FUN_004833c0                   ; 004ebdac
        ;   XREF to: 004833c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004833c0()
    ADD ESP,0x8                         ; 004ebdb1
    PUSH 0x1                            ; 004ebdb4
    LEA EAX,[ESP + 0xc]                 ; 004ebdb6
    PUSH EAX                            ; 004ebdba
    CALL FUN_00483440                   ; 004ebdbb
        ;   XREF to: 00483440 (UNCONDITIONAL_CALL)  ; undefined FUN_00483440()
    ADD ESP,0x8                         ; 004ebdc0
    PUSH 0x0                            ; 004ebdc3
    MOV EDX,dword ptr [ESP + 0xc94]     ; 004ebdc5
    PUSH EDX                            ; 004ebdcc
    PUSH 0x5c7bb8                       ; 004ebdcd | = "Edit key settings"
    CALL FUN_00508960                   ; 004ebdd2
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ebdd7
    PUSH EAX                            ; 004ebdda
    LEA EAX,[ESP + 0x14]                ; 004ebddb
    PUSH EAX                            ; 004ebddf
    CALL FUN_00483450                   ; 004ebde0
        ;   XREF to: 00483450 (UNCONDITIONAL_CALL)  ; undefined FUN_00483450()
    ADD ESP,0x10                        ; 004ebde5
    TEST EAX,EAX                        ; 004ebde8
    JL 0x004ec2ce                       ; 004ebdea
        ;   XREF to: 004ec2ce (CONDITIONAL_JUMP)  ; LAB_004ec2ce
    JNZ 0x004ec2a6                      ; 004ebdf0
        ;   XREF to: 004ec2a6 (CONDITIONAL_JUMP)  ; LAB_004ec2a6
    MOV ESI,dword ptr [0x005fe9dc]      ; 004ebdf6 | DAT_005fe9dc
    PUSH ESI                            ; 004ebdfc
    CALL FUN_004b8e60                   ; 004ebdfd
        ;   XREF to: 004b8e60 (UNCONDITIONAL_CALL)  ; undefined FUN_004b8e60()
    ADD ESP,0x4                         ; 004ebe02
    PUSH 0x0                            ; 004ebe05
    LEA EAX,[ESP + 0xc]                 ; 004ebe07
    PUSH EAX                            ; 004ebe0b
    CALL FUN_004832b0                   ; 004ebe0c
        ;   XREF to: 004832b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004832b0()
    ADD ESP,0x8                         ; 004ebe11
    JMP 0x004eaeae                      ; 004ebe14
        ;   XREF to: 004eaeae (UNCONDITIONAL_JUMP)  ; LAB_004eaeae
    CALL FUN_004e7dc0                   ; 004ebe19
        ;   XREF to: 004e7dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e7dc0()
        ;   Label: LAB_004ebe19
    TEST EAX,EAX                        ; 004ebe1e
    JNZ 0x004eaea3                      ; 004ebe20
        ;   XREF to: 004eaea3 (CONDITIONAL_JUMP)  ; LAB_004eaea3
    ADD ESP,0xc8c                       ; 004ebe26
        ;   Label: LAB_004ebe26
    POP EBP                             ; 004ebe2c
    POP EBX                             ; 004ebe2d
    RET                                 ; 004ebe2e
    PUSH 0x5c7ac0                       ; 004ebe2f | DAT_005c7ac0
        ;   Label: LAB_004ebe2f
    JMP 0x004eb4e6                      ; 004ebe34
        ;   XREF to: 004eb4e6 (UNCONDITIONAL_JUMP)  ; LAB_004eb4e6
    IMUL ESI,EBP,0x28                   ; 004ebe39
        ;   Label: caseD_255
    LEA EDI,[ESP + 0x3c8]               ; 004ebe3c
    ADD ESI,0x1d75d20                   ; 004ebe43
    PUSH EDI                            ; 004ebe49
    MOV AL,byte ptr [ESI]               ; 004ebe4a
        ;   Label: LAB_004ebe4a
    MOV byte ptr [EDI],AL               ; 004ebe4c
    CMP AL,0x0                          ; 004ebe4e
    JZ 0x004ebe62                       ; 004ebe50
        ;   XREF to: 004ebe62 (CONDITIONAL_JUMP)  ; LAB_004ebe62
    MOV AL,byte ptr [ESI + 0x1]         ; 004ebe52
    ADD ESI,0x2                         ; 004ebe55
    MOV byte ptr [EDI + 0x1],AL         ; 004ebe58
    ADD EDI,0x2                         ; 004ebe5b
    CMP AL,0x0                          ; 004ebe5e
    JNZ 0x004ebe4a                      ; 004ebe60
        ;   XREF to: 004ebe4a (CONDITIONAL_JUMP)  ; LAB_004ebe4a
    POP EDI                             ; 004ebe62
        ;   Label: LAB_004ebe62
    PUSH 0x5c7bca                       ; 004ebe63 | = " is assigned to the mouse.  Can't ass..."
    CALL FUN_00508960                   ; 004ebe68
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ebe6d
    LEA EDI,[ESP + 0x3c8]               ; 004ebe70
    MOV ESI,EAX                         ; 004ebe77
    PUSH EDI                            ; 004ebe79
    SUB ECX,ECX                         ; 004ebe7a
    DEC ECX                             ; 004ebe7c
    MOV AL,0x0                          ; 004ebe7d
    SCASB.REPNE ES:EDI                  ; 004ebe7f
    DEC EDI                             ; 004ebe81
    MOV AL,byte ptr [ESI]               ; 004ebe82
        ;   Label: LAB_004ebe82
    MOV byte ptr [EDI],AL               ; 004ebe84
    CMP AL,0x0                          ; 004ebe86
    JZ 0x004ebe9a                       ; 004ebe88
        ;   XREF to: 004ebe9a (CONDITIONAL_JUMP)  ; LAB_004ebe9a
    MOV AL,byte ptr [ESI + 0x1]         ; 004ebe8a
    ADD ESI,0x2                         ; 004ebe8d
    MOV byte ptr [EDI + 0x1],AL         ; 004ebe90
    ADD EDI,0x2                         ; 004ebe93
    CMP AL,0x0                          ; 004ebe96
    JNZ 0x004ebe82                      ; 004ebe98
        ;   XREF to: 004ebe82 (CONDITIONAL_JUMP)  ; LAB_004ebe82
    POP EDI                             ; 004ebe9a
        ;   Label: LAB_004ebe9a
    LEA EAX,[ESP + 0x3c8]               ; 004ebe9b
    PUSH EAX                            ; 004ebea2
    MOV ECX,dword ptr [0x005fb140]      ; 004ebea3 | DAT_005fb140
    PUSH ECX                            ; 004ebea9
    CALL FUN_0047cf40                   ; 004ebeaa
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cf40()
    ADD ESP,0x8                         ; 004ebeaf
        ;   Label: LAB_004ebeaf
    PUSH 0x0                            ; 004ebeb2
    LEA EAX,[ESP + 0xc]                 ; 004ebeb4
    PUSH EAX                            ; 004ebeb8
    CALL FUN_004832b0                   ; 004ebeb9
        ;   XREF to: 004832b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004832b0()
    ADD ESP,0x8                         ; 004ebebe
    JMP 0x004eaeae                      ; 004ebec1
        ;   XREF to: 004eaeae (UNCONDITIONAL_JUMP)  ; LAB_004eaeae
    IMUL ESI,EBP,0x28                   ; 004ebec6
        ;   Label: caseD_251
    LEA EDI,[ESP + 0x9c8]               ; 004ebec9
    ADD ESI,0x1d75d20                   ; 004ebed0
    PUSH EDI                            ; 004ebed6
    MOV AL,byte ptr [ESI]               ; 004ebed7
        ;   Label: LAB_004ebed7
    MOV byte ptr [EDI],AL               ; 004ebed9
    CMP AL,0x0                          ; 004ebedb
    JZ 0x004ebeef                       ; 004ebedd
        ;   XREF to: 004ebeef (CONDITIONAL_JUMP)  ; LAB_004ebeef
    MOV AL,byte ptr [ESI + 0x1]         ; 004ebedf
    ADD ESI,0x2                         ; 004ebee2
    MOV byte ptr [EDI + 0x1],AL         ; 004ebee5
    ADD EDI,0x2                         ; 004ebee8
    CMP AL,0x0                          ; 004ebeeb
    JNZ 0x004ebed7                      ; 004ebeed
        ;   XREF to: 004ebed7 (CONDITIONAL_JUMP)  ; LAB_004ebed7
    POP EDI                             ; 004ebeef
        ;   Label: LAB_004ebeef
    PUSH 0x5c7bfa                       ; 004ebef0 | = " is assigned to the gamepad.  Can't a..."
    CALL FUN_00508960                   ; 004ebef5
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ebefa
    LEA EDI,[ESP + 0x9c8]               ; 004ebefd
    MOV ESI,EAX                         ; 004ebf04
    PUSH EDI                            ; 004ebf06
    SUB ECX,ECX                         ; 004ebf07
    DEC ECX                             ; 004ebf09
    MOV AL,0x0                          ; 004ebf0a
    SCASB.REPNE ES:EDI                  ; 004ebf0c
    DEC EDI                             ; 004ebf0e
    MOV AL,byte ptr [ESI]               ; 004ebf0f
        ;   Label: LAB_004ebf0f
    MOV byte ptr [EDI],AL               ; 004ebf11
    CMP AL,0x0                          ; 004ebf13
    JZ 0x004ebf27                       ; 004ebf15
        ;   XREF to: 004ebf27 (CONDITIONAL_JUMP)  ; LAB_004ebf27
    MOV AL,byte ptr [ESI + 0x1]         ; 004ebf17
    ADD ESI,0x2                         ; 004ebf1a
    MOV byte ptr [EDI + 0x1],AL         ; 004ebf1d
    ADD EDI,0x2                         ; 004ebf20
    CMP AL,0x0                          ; 004ebf23
    JNZ 0x004ebf0f                      ; 004ebf25
        ;   XREF to: 004ebf0f (CONDITIONAL_JUMP)  ; LAB_004ebf0f
    POP EDI                             ; 004ebf27
        ;   Label: LAB_004ebf27
    LEA EAX,[ESP + 0x9c8]               ; 004ebf28
    PUSH EAX                            ; 004ebf2f
    MOV EBX,dword ptr [0x005fb140]      ; 004ebf30 | DAT_005fb140
    PUSH EBX                            ; 004ebf36
    CALL FUN_0047cfa0                   ; 004ebf37
        ;   XREF to: 0047cfa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cfa0()
    JMP 0x004ebeaf                      ; 004ebf3c
        ;   XREF to: 004ebeaf (UNCONDITIONAL_JUMP)  ; LAB_004ebeaf
    MOV EAX,[0x005fe9dc]                ; 004ebf41 | DAT_005fe9dc
        ;   Label: default
    CMP dword ptr [EAX + 0xd4],0x2      ; 004ebf46 | DAT_01d213e0
    JZ 0x004ebfa7                       ; 004ebf4d
        ;   XREF to: 004ebfa7 (CONDITIONAL_JUMP)  ; LAB_004ebfa7
    MOV ESI,0xffffffff                  ; 004ebf4f
        ;   Label: LAB_004ebf4f
    XOR EBX,EBX                         ; 004ebf54
    PUSH EBX                            ; 004ebf56
        ;   Label: LAB_004ebf56
    MOV EAX,[0x00600284]                ; 004ebf57 | DAT_00600284
    PUSH EAX                            ; 004ebf5c | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ebf5d | DAT_01d70a78
    CALL dword ptr [EDI]                ; 004ebf5f
    ADD ESP,0x8                         ; 004ebf61
    TEST EAX,EAX                        ; 004ebf64
    JZ 0x004ebfb2                       ; 004ebf66
        ;   XREF to: 004ebfb2 (CONDITIONAL_JUMP)  ; LAB_004ebfb2
    TEST ESI,ESI                        ; 004ebf68
    JL 0x004ec1ab                       ; 004ebf6a
        ;   XREF to: 004ec1ab (CONDITIONAL_JUMP)  ; LAB_004ec1ab
    PUSH 0x5c7c2c                       ; 004ebf70 | = "OK - you can release the key now..."
        ;   Label: LAB_004ebf70
    CALL FUN_00508960                   ; 004ebf75
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ebf7a
    PUSH EAX                            ; 004ebf7d
    MOV ESI,dword ptr [0x005fb140]      ; 004ebf7e | DAT_005fb140
    PUSH ESI                            ; 004ebf84
    CALL FUN_0047cfa0                   ; 004ebf85
        ;   XREF to: 0047cfa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cfa0()
    ADD ESP,0x8                         ; 004ebf8a
    MOV EAX,[0x00600284]                ; 004ebf8d | DAT_00600284
    PUSH 0x1                            ; 004ebf92
    MOV EDX,dword ptr [EAX]             ; 004ebf94 | DAT_01d70a78
    PUSH EAX                            ; 004ebf96 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 004ebf97
    ADD ESP,0x8                         ; 004ebf99
    TEST EAX,EAX                        ; 004ebf9c
    JNZ 0x004ebfde                      ; 004ebf9e
        ;   XREF to: 004ebfde (CONDITIONAL_JUMP)  ; LAB_004ebfde
    CALL FUN_0057a8a0                   ; 004ebfa0
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a8a0()
    JMP 0x004ebf41                      ; 004ebfa5
        ;   XREF to: 004ebf41 (UNCONDITIONAL_JUMP)  ; default
    PUSH EAX                            ; 004ebfa7
        ;   Label: LAB_004ebfa7
    CALL FUN_004b93e0                   ; 004ebfa8
        ;   XREF to: 004b93e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b93e0()
    ADD ESP,0x4                         ; 004ebfad
    JMP 0x004ebf4f                      ; 004ebfb0
        ;   XREF to: 004ebf4f (UNCONDITIONAL_JUMP)  ; LAB_004ebf4f
    INC EBX                             ; 004ebfb2
        ;   Label: LAB_004ebfb2
    CMP EBX,0x258                       ; 004ebfb3
    JL 0x004ebf56                       ; 004ebfb9
        ;   XREF to: 004ebf56 (CONDITIONAL_JUMP)  ; LAB_004ebf56
    MOV EAX,[0x005fe9dc]                ; 004ebfbb | DAT_005fe9dc
    CMP dword ptr [EAX + 0xd4],0x3      ; 004ebfc0 | DAT_01d213e0
    JNZ 0x004ebfd9                      ; 004ebfc7
        ;   XREF to: 004ebfd9 (CONDITIONAL_JUMP)  ; LAB_004ebfd9
    CMP ESI,0x200                       ; 004ebfc9
    JZ 0x004ebf70                       ; 004ebfcf
        ;   XREF to: 004ebf70 (CONDITIONAL_JUMP)  ; LAB_004ebf70
    CMP ESI,0x201                       ; 004ebfd1
    JZ 0x004ebf70                       ; 004ebfd7
        ;   XREF to: 004ebf70 (CONDITIONAL_JUMP)  ; LAB_004ebf70
    CMP ESI,-0x1                        ; 004ebfd9
        ;   Label: LAB_004ebfd9
    JNZ 0x004ebf70                      ; 004ebfdc
        ;   XREF to: 004ebf70 (CONDITIONAL_JUMP)  ; LAB_004ebf70
    PUSH 0x1                            ; 004ebfde
        ;   Label: LAB_004ebfde
    MOV EAX,[0x00600284]                ; 004ebfe0 | DAT_00600284
    PUSH EAX                            ; 004ebfe5 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004ebfe6 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 004ebfe8
    ADD ESP,0x8                         ; 004ebfea
    TEST EAX,EAX                        ; 004ebfed
    JNZ 0x004ec1b2                      ; 004ebfef
        ;   XREF to: 004ec1b2 (CONDITIONAL_JUMP)  ; LAB_004ec1b2
    PUSH 0x5c7c50                       ; 004ebff5 | = "Press new key or button for "
    CALL FUN_00508960                   ; 004ebffa
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ebfff
    LEA EDI,[ESP + 0x5c8]               ; 004ec002
    MOV ESI,EAX                         ; 004ec009
    PUSH EDI                            ; 004ec00b
    MOV AL,byte ptr [ESI]               ; 004ec00c
        ;   Label: LAB_004ec00c
    MOV byte ptr [EDI],AL               ; 004ec00e
    CMP AL,0x0                          ; 004ec010
    JZ 0x004ec024                       ; 004ec012
        ;   XREF to: 004ec024 (CONDITIONAL_JUMP)  ; LAB_004ec024
    MOV AL,byte ptr [ESI + 0x1]         ; 004ec014
    ADD ESI,0x2                         ; 004ec017
    MOV byte ptr [EDI + 0x1],AL         ; 004ec01a
    ADD EDI,0x2                         ; 004ec01d
    CMP AL,0x0                          ; 004ec020
    JNZ 0x004ec00c                      ; 004ec022
        ;   XREF to: 004ec00c (CONDITIONAL_JUMP)  ; LAB_004ec00c
    POP EDI                             ; 004ec024
        ;   Label: LAB_004ec024
    IMUL ESI,EBP,0x28                   ; 004ec025
    LEA EDI,[ESP + 0x5c8]               ; 004ec028
    ADD ESI,0x1d75d20                   ; 004ec02f
    PUSH EDI                            ; 004ec035
    SUB ECX,ECX                         ; 004ec036
    DEC ECX                             ; 004ec038
    MOV AL,0x0                          ; 004ec039
    SCASB.REPNE ES:EDI                  ; 004ec03b
    DEC EDI                             ; 004ec03d
    MOV AL,byte ptr [ESI]               ; 004ec03e
        ;   Label: LAB_004ec03e
    MOV byte ptr [EDI],AL               ; 004ec040
    CMP AL,0x0                          ; 004ec042
    JZ 0x004ec056                       ; 004ec044
        ;   XREF to: 004ec056 (CONDITIONAL_JUMP)  ; LAB_004ec056
    MOV AL,byte ptr [ESI + 0x1]         ; 004ec046
    ADD ESI,0x2                         ; 004ec049
    MOV byte ptr [EDI + 0x1],AL         ; 004ec04c
    ADD EDI,0x2                         ; 004ec04f
    CMP AL,0x0                          ; 004ec052
    JNZ 0x004ec03e                      ; 004ec054
        ;   XREF to: 004ec03e (CONDITIONAL_JUMP)  ; LAB_004ec03e
    POP EDI                             ; 004ec056
        ;   Label: LAB_004ec056
    LEA EAX,[ESP + 0x5c8]               ; 004ec057
    PUSH EAX                            ; 004ec05e
    MOV EDI,dword ptr [0x005fb140]      ; 004ec05f | DAT_005fb140
    PUSH EDI                            ; 004ec065
    CALL FUN_0047cfa0                   ; 004ec066
        ;   XREF to: 0047cfa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cfa0()
    ADD ESP,0x8                         ; 004ec06b
    PUSH 0x1                            ; 004ec06e
    MOV EAX,[0x00600284]                ; 004ec070 | DAT_00600284
    PUSH EAX                            ; 004ec075 | DAT_01d70a78
    CALL FUN_004df5d0                   ; 004ec076
        ;   XREF to: 004df5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004df5d0()
    ADD ESP,0x8                         ; 004ec07b
    CALL FUN_0057a8a0                   ; 004ec07e
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a8a0()
        ;   Label: LAB_004ec07e
    MOV EAX,[0x005fe9dc]                ; 004ec083 | DAT_005fe9dc
    CMP dword ptr [EAX + 0xd4],0x2      ; 004ec088 | DAT_01d213e0
    JZ 0x004ec1cb                       ; 004ec08f
        ;   XREF to: 004ec1cb (CONDITIONAL_JUMP)  ; LAB_004ec1cb
    MOV ESI,0xffffffff                  ; 004ec095
        ;   Label: LAB_004ec095
    XOR EBX,EBX                         ; 004ec09a
    PUSH EBX                            ; 004ec09c
        ;   Label: LAB_004ec09c
    MOV EAX,[0x00600284]                ; 004ec09d | DAT_00600284
    PUSH EAX                            ; 004ec0a2 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ec0a3 | DAT_01d70a78
    CALL dword ptr [EDI]                ; 004ec0a5
    ADD ESP,0x8                         ; 004ec0a7
    TEST EAX,EAX                        ; 004ec0aa
    JZ 0x004ec0b4                       ; 004ec0ac
        ;   XREF to: 004ec0b4 (CONDITIONAL_JUMP)  ; LAB_004ec0b4
    TEST ESI,ESI                        ; 004ec0ae
    JGE 0x004ec07e                      ; 004ec0b0
        ;   XREF to: 004ec07e (CONDITIONAL_JUMP)  ; LAB_004ec07e
    MOV ESI,EBX                         ; 004ec0b2
    INC EBX                             ; 004ec0b4
        ;   Label: LAB_004ec0b4
    CMP EBX,0x258                       ; 004ec0b5
    JL 0x004ec09c                       ; 004ec0bb
        ;   XREF to: 004ec09c (CONDITIONAL_JUMP)  ; LAB_004ec09c
    MOV EAX,[0x005fe9dc]                ; 004ec0bd | DAT_005fe9dc
    CMP dword ptr [EAX + 0xd4],0x3      ; 004ec0c2 | DAT_01d213e0
    JNZ 0x004ec1e5                      ; 004ec0c9
        ;   XREF to: 004ec1e5 (CONDITIONAL_JUMP)  ; LAB_004ec1e5
    CMP ESI,0x200                       ; 004ec0cf
    JNZ 0x004ec1d9                      ; 004ec0d5
        ;   XREF to: 004ec1d9 (CONDITIONAL_JUMP)  ; LAB_004ec1d9
    PUSH 0x5c7c6d                       ; 004ec0db | = "Mouse buttons cannot be redefined"
        ;   Label: LAB_004ec0db
    CALL FUN_00508960                   ; 004ec0e0
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec0e5
    LEA EDI,[ESP + 0x7c8]               ; 004ec0e8
    MOV ESI,EAX                         ; 004ec0ef
    PUSH EDI                            ; 004ec0f1
    MOV AL,byte ptr [ESI]               ; 004ec0f2
        ;   Label: LAB_004ec0f2
    MOV byte ptr [EDI],AL               ; 004ec0f4
    CMP AL,0x0                          ; 004ec0f6
    JZ 0x004ec10a                       ; 004ec0f8
        ;   XREF to: 004ec10a (CONDITIONAL_JUMP)  ; LAB_004ec10a
    MOV AL,byte ptr [ESI + 0x1]         ; 004ec0fa
    ADD ESI,0x2                         ; 004ec0fd
    MOV byte ptr [EDI + 0x1],AL         ; 004ec100
    ADD EDI,0x2                         ; 004ec103
    CMP AL,0x0                          ; 004ec106
    JNZ 0x004ec0f2                      ; 004ec108
        ;   XREF to: 004ec0f2 (CONDITIONAL_JUMP)  ; LAB_004ec0f2
    POP EDI                             ; 004ec10a
        ;   Label: LAB_004ec10a
    IMUL ESI,EBP,0x28                   ; 004ec10b
    LEA EDI,[ESP + 0x7c8]               ; 004ec10e
    ADD ESI,0x1d75d20                   ; 004ec115
    PUSH EDI                            ; 004ec11b
    SUB ECX,ECX                         ; 004ec11c
    DEC ECX                             ; 004ec11e
    MOV AL,0x0                          ; 004ec11f
    SCASB.REPNE ES:EDI                  ; 004ec121
    DEC EDI                             ; 004ec123
    MOV AL,byte ptr [ESI]               ; 004ec124
        ;   Label: LAB_004ec124
    MOV byte ptr [EDI],AL               ; 004ec126
    CMP AL,0x0                          ; 004ec128
    JZ 0x004ec13c                       ; 004ec12a
        ;   XREF to: 004ec13c (CONDITIONAL_JUMP)  ; LAB_004ec13c
    MOV AL,byte ptr [ESI + 0x1]         ; 004ec12c
    ADD ESI,0x2                         ; 004ec12f
    MOV byte ptr [EDI + 0x1],AL         ; 004ec132
    ADD EDI,0x2                         ; 004ec135
    CMP AL,0x0                          ; 004ec138
    JNZ 0x004ec124                      ; 004ec13a
        ;   XREF to: 004ec124 (CONDITIONAL_JUMP)  ; LAB_004ec124
    POP EDI                             ; 004ec13c
        ;   Label: LAB_004ec13c
    LEA EAX,[ESP + 0x7c8]               ; 004ec13d
    PUSH EAX                            ; 004ec144
    MOV EBX,dword ptr [0x005fb140]      ; 004ec145 | DAT_005fb140
    PUSH EBX                            ; 004ec14b
    CALL FUN_0047cfa0                   ; 004ec14c
        ;   XREF to: 0047cfa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cfa0()
    ADD ESP,0x8                         ; 004ec151
    PUSH 0x5c7c8f                       ; 004ec154 | = "OK - you can release the key now..."
        ;   Label: LAB_004ec154
    CALL FUN_00508960                   ; 004ec159
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec15e
    PUSH EAX                            ; 004ec161
    MOV ESI,dword ptr [0x005fb140]      ; 004ec162 | DAT_005fb140
    PUSH ESI                            ; 004ec168
    CALL FUN_0047cfa0                   ; 004ec169
        ;   XREF to: 0047cfa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cfa0()
    ADD ESP,0x8                         ; 004ec16e
    MOV EAX,[0x005fe9dc]                ; 004ec171 | DAT_005fe9dc
        ;   Label: LAB_004ec171
    CMP dword ptr [EAX + 0xd4],0x2      ; 004ec176 | DAT_01d213e0
    JZ 0x004ec204                       ; 004ec17d
        ;   XREF to: 004ec204 (CONDITIONAL_JUMP)  ; LAB_004ec204
    MOV ESI,0xffffffff                  ; 004ec183
        ;   Label: LAB_004ec183
    XOR EBX,EBX                         ; 004ec188
    PUSH EBX                            ; 004ec18a
        ;   Label: LAB_004ec18a
    MOV EAX,[0x00600284]                ; 004ec18b | DAT_00600284
    PUSH EAX                            ; 004ec190 | DAT_01d70a78
    MOV EDI,dword ptr [EAX]             ; 004ec191 | DAT_01d70a78
    CALL dword ptr [EDI]                ; 004ec193
    ADD ESP,0x8                         ; 004ec195
    TEST EAX,EAX                        ; 004ec198
    JZ 0x004ec212                       ; 004ec19a
        ;   XREF to: 004ec212 (CONDITIONAL_JUMP)  ; LAB_004ec212
    TEST ESI,ESI                        ; 004ec19c
    JL 0x004ec288                       ; 004ec19e
        ;   XREF to: 004ec288 (CONDITIONAL_JUMP)  ; LAB_004ec288
    CALL FUN_0057a8a0                   ; 004ec1a4
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a8a0()
        ;   Label: LAB_004ec1a4
    JMP 0x004ec171                      ; 004ec1a9
        ;   XREF to: 004ec171 (UNCONDITIONAL_JUMP)  ; LAB_004ec171
    MOV ESI,EBX                         ; 004ec1ab
        ;   Label: LAB_004ec1ab
    JMP 0x004ebfb2                      ; 004ec1ad
        ;   XREF to: 004ebfb2 (UNCONDITIONAL_JUMP)  ; LAB_004ebfb2
    CALL FUN_004032b0                   ; 004ec1b2
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
        ;   Label: LAB_004ec1b2
    PUSH 0x0                            ; 004ec1b7
    LEA EAX,[ESP + 0xc]                 ; 004ec1b9
    PUSH EAX                            ; 004ec1bd
    CALL FUN_004832b0                   ; 004ec1be
        ;   XREF to: 004832b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004832b0()
    ADD ESP,0x8                         ; 004ec1c3
    JMP 0x004eaeae                      ; 004ec1c6
        ;   XREF to: 004eaeae (UNCONDITIONAL_JUMP)  ; LAB_004eaeae
    PUSH EAX                            ; 004ec1cb
        ;   Label: LAB_004ec1cb
    CALL FUN_004b93e0                   ; 004ec1cc
        ;   XREF to: 004b93e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b93e0()
    ADD ESP,0x4                         ; 004ec1d1
    JMP 0x004ec095                      ; 004ec1d4
        ;   XREF to: 004ec095 (UNCONDITIONAL_JUMP)  ; LAB_004ec095
    CMP ESI,0x201                       ; 004ec1d9
        ;   Label: LAB_004ec1d9
    JZ 0x004ec0db                       ; 004ec1df
        ;   XREF to: 004ec0db (CONDITIONAL_JUMP)  ; LAB_004ec0db
    CMP ESI,-0x3                        ; 004ec1e5
        ;   Label: LAB_004ec1e5
    JZ 0x004ec0db                       ; 004ec1e8
        ;   XREF to: 004ec0db (CONDITIONAL_JUMP)  ; LAB_004ec0db
    TEST ESI,ESI                        ; 004ec1ee
    JL 0x004ec07e                       ; 004ec1f0
        ;   XREF to: 004ec07e (CONDITIONAL_JUMP)  ; LAB_004ec07e
    MOV EAX,dword ptr [EBP*0x4 + 0x1d75c9c] ; 004ec1f6 | DAT_01d75c9c
    MOV dword ptr [EAX],ESI             ; 004ec1fd
    JMP 0x004ec154                      ; 004ec1ff
        ;   XREF to: 004ec154 (UNCONDITIONAL_JUMP)  ; LAB_004ec154
    PUSH EAX                            ; 004ec204
        ;   Label: LAB_004ec204
    CALL FUN_004b93e0                   ; 004ec205
        ;   XREF to: 004b93e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b93e0()
    ADD ESP,0x4                         ; 004ec20a
    JMP 0x004ec183                      ; 004ec20d
        ;   XREF to: 004ec183 (UNCONDITIONAL_JUMP)  ; LAB_004ec183
    INC EBX                             ; 004ec212
        ;   Label: LAB_004ec212
    CMP EBX,0x258                       ; 004ec213
    JL 0x004ec18a                       ; 004ec219
        ;   XREF to: 004ec18a (CONDITIONAL_JUMP)  ; LAB_004ec18a
    MOV EAX,[0x005fe9dc]                ; 004ec21f | DAT_005fe9dc
    CMP dword ptr [EAX + 0xd4],0x3      ; 004ec224 | DAT_01d213e0
    JNZ 0x004ec245                      ; 004ec22b
        ;   XREF to: 004ec245 (CONDITIONAL_JUMP)  ; LAB_004ec245
    CMP ESI,0x200                       ; 004ec22d
    JZ 0x004ec1a4                       ; 004ec233
        ;   XREF to: 004ec1a4 (CONDITIONAL_JUMP)  ; LAB_004ec1a4
    CMP ESI,0x201                       ; 004ec239
    JZ 0x004ec1a4                       ; 004ec23f
        ;   XREF to: 004ec1a4 (CONDITIONAL_JUMP)  ; LAB_004ec1a4
    CMP ESI,-0x1                        ; 004ec245
        ;   Label: LAB_004ec245
    JNZ 0x004ec1a4                      ; 004ec248
        ;   XREF to: 004ec1a4 (CONDITIONAL_JUMP)  ; LAB_004ec1a4
    MOV ECX,dword ptr [0x01d75c98]      ; 004ec24e | DAT_01d75c98
    XOR EAX,EAX                         ; 004ec254
    TEST ECX,ECX                        ; 004ec256
    JLE 0x004ec275                      ; 004ec258
        ;   XREF to: 004ec275 (CONDITIONAL_JUMP)  ; LAB_004ec275
    LEA ECX,[EBP*0x4 + 0x0]             ; 004ec25a
    XOR EBX,EBX                         ; 004ec261
    CMP EAX,EBP                         ; 004ec263
        ;   Label: LAB_004ec263
    JNZ 0x004ec28c                      ; 004ec265
        ;   XREF to: 004ec28c (CONDITIONAL_JUMP)  ; LAB_004ec28c
    MOV ESI,dword ptr [0x01d75c98]      ; 004ec267 | DAT_01d75c98
        ;   Label: LAB_004ec267
    INC EAX                             ; 004ec26d
    ADD EBX,0x4                         ; 004ec26e
    CMP EAX,ESI                         ; 004ec271
    JL 0x004ec263                       ; 004ec273
        ;   XREF to: 004ec263 (CONDITIONAL_JUMP)  ; LAB_004ec263
    PUSH 0x0                            ; 004ec275
        ;   Label: LAB_004ec275
    MOV EDI,dword ptr [0x00600284]      ; 004ec277 | DAT_00600284
    PUSH EDI                            ; 004ec27d | DAT_01d70a78
    CALL FUN_004df5d0                   ; 004ec27e
        ;   XREF to: 004df5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004df5d0()
    JMP 0x004ebeaf                      ; 004ec283
        ;   XREF to: 004ebeaf (UNCONDITIONAL_JUMP)  ; LAB_004ebeaf
    MOV ESI,EBX                         ; 004ec288
        ;   Label: LAB_004ec288
    JMP 0x004ec212                      ; 004ec28a
        ;   XREF to: 004ec212 (UNCONDITIONAL_JUMP)  ; LAB_004ec212
    MOV ESI,dword ptr [EBX + 0x1d75c9c] ; 004ec28c | DAT_01d75ca0
        ;   Label: LAB_004ec28c
    MOV EDI,dword ptr [ECX + 0x1d75c9c] ; 004ec292 | DAT_01d75c9c
    MOV EDX,dword ptr [ESI]             ; 004ec298 | DAT_01d21358
    CMP EDX,dword ptr [EDI]             ; 004ec29a
    JNZ 0x004ec267                      ; 004ec29c
        ;   XREF to: 004ec267 (CONDITIONAL_JUMP)  ; LAB_004ec267
    MOV dword ptr [ESI],0x257           ; 004ec29e | DAT_01d21358
    JMP 0x004ec267                      ; 004ec2a4
        ;   XREF to: 004ec267 (UNCONDITIONAL_JUMP)  ; LAB_004ec267
    MOV dword ptr [ESP + 0xc90],EAX     ; 004ec2a6
        ;   Label: LAB_004ec2a6
    LEA EBP,[EAX + -0x1]                ; 004ec2ad
    MOV EAX,dword ptr [EBP*0x4 + 0x1d75c9c] ; 004ec2b0 | DAT_01d75c9c
    MOV EAX,dword ptr [EAX]             ; 004ec2b7
    SUB EAX,0x251                       ; 004ec2b9
    CMP EAX,0x5                         ; 004ec2be
    JA 0x004ebf41                       ; 004ec2c1
        ;   XREF to: 004ebf41 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4eae68]  ; 004ec2c7 | caseD_254 | caseD_256 | switchdataD_004eae68
        ;   Label: switchD
    PUSH 0x0                            ; 004ec2ce
        ;   Label: LAB_004ec2ce
    LEA EAX,[ESP + 0xc]                 ; 004ec2d0
    PUSH EAX                            ; 004ec2d4
    CALL FUN_004832b0                   ; 004ec2d5
        ;   XREF to: 004832b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004832b0()
    MOV EAX,[0x005fe9dc]                ; 004ec2da | DAT_005fe9dc
    XOR EBX,EBX                         ; 004ec2df
    MOV EDI,dword ptr [EAX + 0xd4]      ; 004ec2e1 | DAT_01d213e0
    ADD ESP,0x8                         ; 004ec2e7
    CMP EDI,0x3                         ; 004ec2ea
    JZ 0x004ec45e                       ; 004ec2ed
        ;   XREF to: 004ec45e (CONDITIONAL_JUMP)  ; LAB_004ec45e
    PUSH 0x5c7cb3                       ; 004ec2f3 | = "Forward"
    CALL FUN_00508960                   ; 004ec2f8
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec2fd
    PUSH EAX                            ; 004ec300
    MOV EAX,[0x005fe9dc]                ; 004ec301 | DAT_005fe9dc
    ADD EAX,0x28                        ; 004ec306
    PUSH EAX                            ; 004ec309
    CALL FUN_004eacb0                   ; 004ec30a
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec30f
    PUSH 0x5c7cbb                       ; 004ec312 | DAT_005c7cbb
    MOV EBX,EAX                         ; 004ec317
    CALL FUN_00508960                   ; 004ec319
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec31e
    PUSH EAX                            ; 004ec321
    MOV EAX,[0x005fe9dc]                ; 004ec322 | DAT_005fe9dc
    ADD EAX,0x2c                        ; 004ec327
    PUSH EAX                            ; 004ec32a
    CALL FUN_004eacb0                   ; 004ec32b
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec330
    PUSH 0x5c7cc0                       ; 004ec333 | = "Strafe on"
    OR EBX,EAX                          ; 004ec338
    CALL FUN_00508960                   ; 004ec33a
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec33f
    PUSH EAX                            ; 004ec342
    MOV EAX,[0x005fe9dc]                ; 004ec343 | DAT_005fe9dc
    ADD EAX,0x34                        ; 004ec348
    PUSH EAX                            ; 004ec34b
    CALL FUN_004eacb0                   ; 004ec34c
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec351
    PUSH 0x5c7cca                       ; 004ec354 | = "Strafe left"
    OR EBX,EAX                          ; 004ec359
    CALL FUN_00508960                   ; 004ec35b
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec360
    PUSH EAX                            ; 004ec363
    MOV EAX,[0x005fe9dc]                ; 004ec364 | DAT_005fe9dc
    ADD EAX,0x38                        ; 004ec369
    PUSH EAX                            ; 004ec36c
    CALL FUN_004eacb0                   ; 004ec36d
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec372
    PUSH 0x5c7cd6                       ; 004ec375 | = "Strafe right"
    OR EBX,EAX                          ; 004ec37a
    CALL FUN_00508960                   ; 004ec37c
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec381
    PUSH EAX                            ; 004ec384
    MOV EAX,[0x005fe9dc]                ; 004ec385 | DAT_005fe9dc
    ADD EAX,0x3c                        ; 004ec38a
    PUSH EAX                            ; 004ec38d
    CALL FUN_004eacb0                   ; 004ec38e
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec393
    PUSH 0x5c7ce3                       ; 004ec396 | = "Turn left"
    OR EBX,EAX                          ; 004ec39b
    CALL FUN_00508960                   ; 004ec39d
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec3a2
    PUSH EAX                            ; 004ec3a5
    MOV EAX,[0x005fe9dc]                ; 004ec3a6 | DAT_005fe9dc
    ADD EAX,0x44                        ; 004ec3ab
    PUSH EAX                            ; 004ec3ae
    CALL FUN_004eacb0                   ; 004ec3af
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec3b4
    OR EBX,EAX                          ; 004ec3b7
    PUSH 0x5c7ced                       ; 004ec3b9 | = "Turn right"
    CALL FUN_00508960                   ; 004ec3be
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec3c3
    PUSH EAX                            ; 004ec3c6
    MOV EAX,[0x005fe9dc]                ; 004ec3c7 | DAT_005fe9dc
    ADD EAX,0x40                        ; 004ec3cc
    PUSH EAX                            ; 004ec3cf
    CALL FUN_004eacb0                   ; 004ec3d0
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec3d5
    PUSH 0x5c7cf8                       ; 004ec3d8 | DAT_005c7cf8
    OR EBX,EAX                          ; 004ec3dd
    CALL FUN_00508960                   ; 004ec3df
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec3e4
    PUSH EAX                            ; 004ec3e7
    MOV EAX,[0x005fe9dc]                ; 004ec3e8 | DAT_005fe9dc
    ADD EAX,0x48                        ; 004ec3ed
    PUSH EAX                            ; 004ec3f0 | DAT_01d21354
    CALL FUN_004eacb0                   ; 004ec3f1
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec3f6
    PUSH 0x5c7cfd                       ; 004ec3f9 | = "Point up"
    OR EBX,EAX                          ; 004ec3fe
    CALL FUN_00508960                   ; 004ec400
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec405
    PUSH EAX                            ; 004ec408
    MOV EAX,[0x005fe9dc]                ; 004ec409 | DAT_005fe9dc
    ADD EAX,0x78                        ; 004ec40e
    PUSH EAX                            ; 004ec411
    CALL FUN_004eacb0                   ; 004ec412
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec417
    PUSH 0x5c7d06                       ; 004ec41a | = "Point down"
    OR EBX,EAX                          ; 004ec41f
    CALL FUN_00508960                   ; 004ec421
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec426
    PUSH EAX                            ; 004ec429
    MOV EAX,[0x005fe9dc]                ; 004ec42a | DAT_005fe9dc
    ADD EAX,0x7c                        ; 004ec42f
    PUSH EAX                            ; 004ec432
    CALL FUN_004eacb0                   ; 004ec433
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec438
    PUSH 0x5c7d11                       ; 004ec43b | = "Quick turn"
    OR EBX,EAX                          ; 004ec440
    CALL FUN_00508960                   ; 004ec442
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec447
    PUSH EAX                            ; 004ec44a
    MOV EAX,[0x005fe9dc]                ; 004ec44b | DAT_005fe9dc
    ADD EAX,0x74                        ; 004ec450
    PUSH EAX                            ; 004ec453
    CALL FUN_004eacb0                   ; 004ec454
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec459
    OR EBX,EAX                          ; 004ec45c
    MOV EAX,[0x005fe9dc]                ; 004ec45e | DAT_005fe9dc
        ;   Label: LAB_004ec45e
    CMP dword ptr [EAX + 0xb0],0x0      ; 004ec463 | DAT_01d213bc
    JZ 0x004ec6e6                       ; 004ec46a
        ;   XREF to: 004ec6e6 (CONDITIONAL_JUMP)  ; LAB_004ec6e6
    PUSH 0x5c7d1c                       ; 004ec470 | DAT_005c7d1c
    CALL FUN_00508960                   ; 004ec475
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
        ;   Label: LAB_004ec475
    ADD ESP,0x4                         ; 004ec47a
    PUSH EAX                            ; 004ec47d
    MOV EAX,[0x005fe9dc]                ; 004ec47e | DAT_005fe9dc
    ADD EAX,0x30                        ; 004ec483
    PUSH EAX                            ; 004ec486
    CALL FUN_004eacb0                   ; 004ec487
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec48c
    OR EBX,EAX                          ; 004ec48f
    PUSH 0x5c7d25                       ; 004ec491 | = "Action"
    CALL FUN_00508960                   ; 004ec496
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec49b
    PUSH EAX                            ; 004ec49e
    MOV EAX,[0x005fe9dc]                ; 004ec49f | DAT_005fe9dc
    ADD EAX,0x4c                        ; 004ec4a4
    PUSH EAX                            ; 004ec4a7 | DAT_01d21358
    CALL FUN_004eacb0                   ; 004ec4a8
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec4ad
    PUSH 0x5c7d2c                       ; 004ec4b0 | = "Use item"
    OR EBX,EAX                          ; 004ec4b5
    CALL FUN_00508960                   ; 004ec4b7
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec4bc
    PUSH EAX                            ; 004ec4bf
    MOV EAX,[0x005fe9dc]                ; 004ec4c0 | DAT_005fe9dc
    ADD EAX,0x50                        ; 004ec4c5
    PUSH EAX                            ; 004ec4c8 | DAT_01d2135c
    CALL FUN_004eacb0                   ; 004ec4c9
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec4ce
    PUSH 0x5c7d35                       ; 004ec4d1 | = "Lantern"
    OR EBX,EAX                          ; 004ec4d6
    CALL FUN_00508960                   ; 004ec4d8
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec4dd
    PUSH EAX                            ; 004ec4e0
    MOV EAX,[0x005fe9dc]                ; 004ec4e1 | DAT_005fe9dc
    ADD EAX,0x54                        ; 004ec4e6
    PUSH EAX                            ; 004ec4e9 | DAT_01d21360
    CALL FUN_004eacb0                   ; 004ec4ea
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec4ef
    PUSH 0x5c7d3d                       ; 004ec4f2 | = "Journal"
    OR EBX,EAX                          ; 004ec4f7
    CALL FUN_00508960                   ; 004ec4f9
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec4fe
    PUSH EAX                            ; 004ec501
    MOV EAX,[0x005fe9dc]                ; 004ec502 | DAT_005fe9dc
    ADD EAX,0x5c                        ; 004ec507
    PUSH EAX                            ; 004ec50a
    CALL FUN_004eacb0                   ; 004ec50b
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec510
    PUSH 0x5c7d45                       ; 004ec513 | DAT_005c7d45
    OR EBX,EAX                          ; 004ec518
    CALL FUN_00508960                   ; 004ec51a
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec51f
    PUSH EAX                            ; 004ec522
    MOV EAX,[0x005fe9dc]                ; 004ec523 | DAT_005fe9dc
    ADD EAX,0x60                        ; 004ec528
    PUSH EAX                            ; 004ec52b
    CALL FUN_004eacb0                   ; 004ec52c
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec531
    PUSH 0x5c7d49                       ; 004ec534 | = "Voodoo Doll"
    OR EBX,EAX                          ; 004ec539
    CALL FUN_00508960                   ; 004ec53b
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec540
    PUSH EAX                            ; 004ec543
    MOV EAX,[0x005fe9dc]                ; 004ec544 | DAT_005fe9dc
    ADD EAX,0x68                        ; 004ec549
    PUSH EAX                            ; 004ec54c
    CALL FUN_004eacb0                   ; 004ec54d
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec552
    OR EBX,EAX                          ; 004ec555
    POP ESI                             ; 004ec557
    POP EDI                             ; 004ec558
    PUSH 0x5c7d55                       ; 004ec559 | DAT_005c7d55
    CALL FUN_00508960                   ; 004ec55e
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec563
    PUSH EAX                            ; 004ec566
    MOV EAX,[0x005fe9dc]                ; 004ec567 | DAT_005fe9dc
    ADD EAX,0x6c                        ; 004ec56c
    PUSH EAX                            ; 004ec56f
    CALL FUN_004eacb0                   ; 004ec570
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec575
    PUSH 0x5c7d5a                       ; 004ec578 | = "Select conventional weapons"
    OR EBX,EAX                          ; 004ec57d
    CALL FUN_00508960                   ; 004ec57f
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec584
    PUSH EAX                            ; 004ec587
    MOV EAX,[0x005fe9dc]                ; 004ec588 | DAT_005fe9dc
    ADD EAX,0x80                        ; 004ec58d
    PUSH EAX                            ; 004ec592
    CALL FUN_004eacb0                   ; 004ec593
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec598
    PUSH 0x5c7d76                       ; 004ec59b | = "Select staves"
    OR EBX,EAX                          ; 004ec5a0
    CALL FUN_00508960                   ; 004ec5a2
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec5a7
    PUSH EAX                            ; 004ec5aa
    MOV EAX,[0x005fe9dc]                ; 004ec5ab | DAT_005fe9dc
    ADD EAX,0x84                        ; 004ec5b0
    PUSH EAX                            ; 004ec5b5
    CALL FUN_004eacb0                   ; 004ec5b6
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec5bb
    PUSH 0x5c7d84                       ; 004ec5be | = "Select Christian weapons"
    OR EBX,EAX                          ; 004ec5c3
    CALL FUN_00508960                   ; 004ec5c5
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec5ca
    PUSH EAX                            ; 004ec5cd
    MOV EAX,[0x005fe9dc]                ; 004ec5ce | DAT_005fe9dc
    ADD EAX,0x88                        ; 004ec5d3
    PUSH EAX                            ; 004ec5d8
    CALL FUN_004eacb0                   ; 004ec5d9
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec5de
    PUSH 0x5c7d9d                       ; 004ec5e1 | = "Select Shaman weapons"
    OR EBX,EAX                          ; 004ec5e6
    CALL FUN_00508960                   ; 004ec5e8
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec5ed
    PUSH EAX                            ; 004ec5f0
    MOV EAX,[0x005fe9dc]                ; 004ec5f1 | DAT_005fe9dc
    ADD EAX,0x8c                        ; 004ec5f6
    PUSH EAX                            ; 004ec5fb
    CALL FUN_004eacb0                   ; 004ec5fc
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec601
    PUSH 0x5c7db3                       ; 004ec604 | = "Select Pagan weapons"
    OR EBX,EAX                          ; 004ec609
    CALL FUN_00508960                   ; 004ec60b
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec610
    PUSH EAX                            ; 004ec613
    MOV EAX,[0x005fe9dc]                ; 004ec614 | DAT_005fe9dc
    ADD EAX,0x90                        ; 004ec619
    PUSH EAX                            ; 004ec61e
    CALL FUN_004eacb0                   ; 004ec61f
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec624
    OR EBX,EAX                          ; 004ec627
    PUSH 0x5c7dc8                       ; 004ec629 | = "Next weapon"
    CALL FUN_00508960                   ; 004ec62e
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec633
    PUSH EAX                            ; 004ec636
    MOV EAX,[0x005fe9dc]                ; 004ec637 | DAT_005fe9dc
    ADD EAX,0x94                        ; 004ec63c
    PUSH EAX                            ; 004ec641 | DAT_01d213a0
    CALL FUN_004eacb0                   ; 004ec642
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec647
    PUSH 0x5c7dd4                       ; 004ec64a | = "Previous weapon"
    OR EBX,EAX                          ; 004ec64f
    CALL FUN_00508960                   ; 004ec651
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec656
    PUSH EAX                            ; 004ec659
    MOV EAX,[0x005fe9dc]                ; 004ec65a | DAT_005fe9dc
    ADD EAX,0x98                        ; 004ec65f
    PUSH EAX                            ; 004ec664 | DAT_01d213a4
    CALL FUN_004eacb0                   ; 004ec665
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec66a
    PUSH 0x5c7de4                       ; 004ec66d | = "Next item"
    OR EBX,EAX                          ; 004ec672
    CALL FUN_00508960                   ; 004ec674
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec679
    PUSH EAX                            ; 004ec67c
    MOV EAX,[0x005fe9dc]                ; 004ec67d | DAT_005fe9dc
    ADD EAX,0x9c                        ; 004ec682
    PUSH EAX                            ; 004ec687 | DAT_01d213a8
    CALL FUN_004eacb0                   ; 004ec688
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec68d
    PUSH 0x5c7dee                       ; 004ec690 | = "Previous item"
    OR EBX,EAX                          ; 004ec695
    CALL FUN_00508960                   ; 004ec697
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004ec69c
    PUSH EAX                            ; 004ec69f
    MOV EAX,[0x005fe9dc]                ; 004ec6a0 | DAT_005fe9dc
    ADD EAX,0xa0                        ; 004ec6a5
    PUSH EAX                            ; 004ec6aa | DAT_01d213ac
    CALL FUN_004eacb0                   ; 004ec6ab
        ;   XREF to: 004eacb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eacb0()
    ADD ESP,0x8                         ; 004ec6b0
    OR EBX,EAX                          ; 004ec6b3
    JZ 0x004ebe26                       ; 004ec6b5
        ;   XREF to: 004ebe26 (CONDITIONAL_JUMP)  ; LAB_004ebe26
    MOV EAX,[0x005fe9dc]                ; 004ec6bb | DAT_005fe9dc
    PUSH EAX                            ; 004ec6c0
    CALL FUN_004b8e60                   ; 004ec6c1
        ;   XREF to: 004b8e60 (UNCONDITIONAL_CALL)  ; undefined FUN_004b8e60()
    ADD ESP,0x4                         ; 004ec6c6
    PUSH 0x5c7dfc                       ; 004ec6c9 | = "One or more keys not valid.  Restorin..."
    MOV EDX,dword ptr [0x005fb140]      ; 004ec6ce | DAT_005fb140
    PUSH EDX                            ; 004ec6d4
    CALL FUN_0047cf40                   ; 004ec6d5
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cf40()
    ADD ESP,0x8                         ; 004ec6da
    ADD ESP,0xc8c                       ; 004ec6dd
    POP EBP                             ; 004ec6e3
    POP EBX                             ; 004ec6e4
    RET                                 ; 004ec6e5
    PUSH 0x5c7d21                       ; 004ec6e6 | DAT_005c7d21
        ;   Label: LAB_004ec6e6
    JMP 0x004ec475                      ; 004ec6eb
        ;   XREF to: 004ec475 (UNCONDITIONAL_JUMP)  ; LAB_004ec475

