; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_screenToWorldRay_FUN_00446760 at 0044679e
;   core_dcamera.cpp_FUN_004421b0 at 004422aa
;   core_dcamera.cpp_FUN_00447f20 at 004480f3
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049ce19
;   core_sound.cpp_updateListeners_FUN_0052c9d0 at 0052cea3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004411b0
        ;   Label: core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0
    PUSH EDI                            ; 004411b1
    PUSH EBP                            ; 004411b2
    SUB ESP,0x1c                        ; 004411b3
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004411b6
    MOV dword ptr [ESP + 0x18],ESI      ; 004411ba
    MOV ESI,dword ptr [ESP + 0x30]      ; 004411be
    MOV EAX,dword ptr [ESI + 0x8]       ; 004411c2
    MOV dword ptr [ESP + 0x8],EAX       ; 004411c5
    MOV EAX,dword ptr [ESI]             ; 004411c9
    MOV EDX,dword ptr [EBP + 0x1c8]     ; 004411cb
    MOV EBX,dword ptr [EBP + 0x1c0]     ; 004411d1
    SUB EAX,EDX                         ; 004411d7
    MOV EDX,dword ptr [ESP + 0x8]       ; 004411d9
    LEA EDI,[EBP + 0x19c]               ; 004411dd
    IMUL EDX                            ; 004411e3
    IDIV EBX                            ; 004411e5
    MOV dword ptr [ESP],EAX             ; 004411e7
    MOV EDX,dword ptr [ESP + 0x8]       ; 004411ea
    MOV EAX,dword ptr [ESI + 0x4]       ; 004411ee
    MOV ECX,dword ptr [EBP + 0x1cc]     ; 004411f1
    MOV EBX,dword ptr [EBP + 0x1c4]     ; 004411f7
    SUB EAX,ECX                         ; 004411fd
    MOV ESI,ESP                         ; 004411ff
    IMUL EDX                            ; 00441201
    IDIV EBX                            ; 00441203
    MOV dword ptr [ESP + 0x4],EAX       ; 00441205
    MOV EAX,dword ptr [ESI]             ; 00441209
    IMUL dword ptr [EDI]                ; 0044120b
    MOV EBX,EAX                         ; 0044120d
    MOV ECX,EDX                         ; 0044120f
    MOV EAX,dword ptr [ESI + 0x4]       ; 00441211
    IMUL dword ptr [EDI + 0xc]          ; 00441214
    ADD EBX,EAX                         ; 00441217
    ADC ECX,EDX                         ; 00441219
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044121b
    IMUL dword ptr [EDI + 0x18]         ; 0044121e
    ADD EAX,EBX                         ; 00441221
    ADC EDX,ECX                         ; 00441223
    SHRD EAX,EDX,0x10                   ; 00441225
    MOV EBX,dword ptr [EBP + 0x16c]     ; 00441229
    MOV ESI,ESP                         ; 0044122f
    ADD EBX,EAX                         ; 00441231
    LEA EDI,[EBP + 0x1a0]               ; 00441233
    MOV dword ptr [ESP + 0xc],EBX       ; 00441239
    MOV EAX,dword ptr [ESI]             ; 0044123d
    IMUL dword ptr [EDI]                ; 0044123f
    MOV EBX,EAX                         ; 00441241
    MOV ECX,EDX                         ; 00441243
    MOV EAX,dword ptr [ESI + 0x4]       ; 00441245
    IMUL dword ptr [EDI + 0xc]          ; 00441248
    ADD EBX,EAX                         ; 0044124b
    ADC ECX,EDX                         ; 0044124d
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044124f
    IMUL dword ptr [EDI + 0x18]         ; 00441252
    ADD EAX,EBX                         ; 00441255
    ADC EDX,ECX                         ; 00441257
    SHRD EAX,EDX,0x10                   ; 00441259
    MOV EBX,dword ptr [EBP + 0x170]     ; 0044125d
    MOV ESI,ESP                         ; 00441263
    ADD EBX,EAX                         ; 00441265
    LEA EDI,[EBP + 0x1a4]               ; 00441267
    MOV dword ptr [ESP + 0x10],EBX      ; 0044126d
    MOV EAX,dword ptr [ESI]             ; 00441271
    IMUL dword ptr [EDI]                ; 00441273
    MOV EBX,EAX                         ; 00441275
    MOV ECX,EDX                         ; 00441277
    MOV EAX,dword ptr [ESI + 0x4]       ; 00441279
    IMUL dword ptr [EDI + 0xc]          ; 0044127c
    ADD EBX,EAX                         ; 0044127f
    ADC ECX,EDX                         ; 00441281
    MOV EAX,dword ptr [ESI + 0x8]       ; 00441283
    IMUL dword ptr [EDI + 0x18]         ; 00441286
    ADD EAX,EBX                         ; 00441289
    ADC EDX,ECX                         ; 0044128b
    SHRD EAX,EDX,0x10                   ; 0044128d
    MOV EBX,dword ptr [EBP + 0x174]     ; 00441291
    MOV EDI,dword ptr [ESP + 0x18]      ; 00441297
    ADD EBX,EAX                         ; 0044129b
    LEA ESI,[ESP + 0xc]                 ; 0044129d
    MOV dword ptr [ESP + 0x14],EBX      ; 004412a1
    MOVSD ES:EDI,ESI                    ; 004412a5
    MOVSD ES:EDI,ESI                    ; 004412a6
    MOVSD ES:EDI,ESI                    ; 004412a7
    MOV EAX,dword ptr [ESP + 0x18]      ; 004412a8
    ADD ESP,0x1c                        ; 004412ac
    POP EBP                             ; 004412af
    POP EDI                             ; 004412b0
    POP EBX                             ; 004412b1
    RET                                 ; 004412b2

