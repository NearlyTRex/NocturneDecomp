; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGame * __cdecl core_game_cpp_CGame_ctor_FUN_004b4180(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_staticInit_FUN_004b3cd0 at 004b3cf9
;
; Referenced Globals:
;   undefined4 DAT_01d225c8
;
; Called Functions:
;   core_game.cpp_FUN_004b8e60
;   core_game.cpp_FUN_004c4d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4180
        ;   Label: core_game.cpp_CGame_ctor_FUN_004b4180
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b4181
    MOV dword ptr [EBX + 0xb8c],0x5e0704 ; 004b4185
    MOV dword ptr [EBX],0x280           ; 004b418f
    MOV dword ptr [EBX + 0x4],0x1e0     ; 004b4195
    MOV dword ptr [EBX + 0x8],0x20      ; 004b419c
    MOV dword ptr [EBX + 0x248],0x10000 ; 004b41a3
    MOV dword ptr [EBX + 0xc],0x0       ; 004b41ad
    MOV dword ptr [EBX + 0x10],0x1      ; 004b41b4
    MOV dword ptr [EBX + 0x14],0x1      ; 004b41bb
    MOV dword ptr [EBX + 0x18],0x1      ; 004b41c2
    MOV dword ptr [EBX + 0x1c],0x1      ; 004b41c9
    MOV dword ptr [EBX + 0x24],0x1      ; 004b41d0
    MOV dword ptr [EBX + 0x20],0x0      ; 004b41d7
    MOV dword ptr [EBX + 0x288],0x0     ; 004b41de
    MOV dword ptr [EBX + 0x28c],0x0     ; 004b41e8
    PUSH EBX                            ; 004b41f2
    MOV dword ptr [EBX + 0xd4],0x1      ; 004b41f3
    CALL core_game.cpp_FUN_004b8e60     ; 004b41fd
        ;   XREF to: 004b8e60 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004b8e60()
    MOV byte ptr [EBX + 0xf4],0x0       ; 004b4202
    MOV dword ptr [EBX + 0x1f4],0x0     ; 004b4209
    MOV dword ptr [EBX + 0x1f8],0x0     ; 004b4213
    MOV dword ptr [EBX + 0x1fc],0x0     ; 004b421d
    MOV dword ptr [EBX + 0x200],0x0     ; 004b4227
    MOV dword ptr [EBX + 0x204],0x0     ; 004b4231
    MOV dword ptr [EBX + 0x210],0x3f800000 ; 004b423b
    MOV dword ptr [EBX + 0x214],0x0     ; 004b4245
    MOV dword ptr [EBX + 0x218],0x0     ; 004b424f
    MOV dword ptr [EBX + 0x21c],0x0     ; 004b4259
    MOV dword ptr [EBX + 0x224],0x0     ; 004b4263
    MOV dword ptr [EBX + 0x228],0x0     ; 004b426d
    MOV dword ptr [EBX + 0x22c],0x0     ; 004b4277
    MOV dword ptr [EBX + 0x230],0x0     ; 004b4281
    MOV dword ptr [EBX + 0x234],0x0     ; 004b428b
    MOV dword ptr [EBX + 0x238],0x0     ; 004b4295
    MOV dword ptr [EBX + 0x23c],0x0     ; 004b429f
    MOV dword ptr [EBX + 0x240],0x0     ; 004b42a9
    MOV dword ptr [EBX + 0xd8],0xa      ; 004b42b3
    MOV dword ptr [EBX + 0xe0],0x0      ; 004b42bd
    MOV dword ptr [EBX + 0xe4],0x1      ; 004b42c7
    ADD ESP,0x4                         ; 004b42d1
    MOV dword ptr [EBX + 0xa70],0x0     ; 004b42d4
    MOV dword ptr [EBX + 0xa74],0x3f800000 ; 004b42de
    MOV dword ptr [EBX + 0x248],0x10000 ; 004b42e8
    MOV dword ptr [EBX + 0x24c],0x0     ; 004b42f2
    MOV dword ptr [EBX + 0xe8],0x0      ; 004b42fc
    MOV dword ptr [EBX + 0x250],0x1     ; 004b4306
    MOV dword ptr [EBX + 0x254],0x1     ; 004b4310
    MOV dword ptr [EBX + 0x258],0x0     ; 004b431a
    MOV dword ptr [EBX + 0x25c],0x0     ; 004b4324
    MOV byte ptr [EBX + 0x968],0x0      ; 004b432e
    MOV dword ptr [EBX + 0xa68],0x0     ; 004b4335
    MOV dword ptr [EBX + 0xa6c],0x0     ; 004b433f
    MOV dword ptr [EBX + 0x260],0x0     ; 004b4349
    MOV dword ptr [EBX + 0xa78],0x0     ; 004b4353
    MOV dword ptr [EBX + 0xb7c],0x0     ; 004b435d
    MOV dword ptr [EBX + 0x264],0x0     ; 004b4367
    MOV dword ptr [EBX + 0x268],0x0     ; 004b4371
    MOV dword ptr [EBX + 0x26c],0x0     ; 004b437b
    MOV dword ptr [EBX + 0x244],0x0     ; 004b4385
    MOV dword ptr [EBX + 0x270],0x0     ; 004b438f
    MOV dword ptr [EBX + 0x278],0x0     ; 004b4399
    MOV dword ptr [EBX + 0x274],0x0     ; 004b43a3
    MOV dword ptr [EBX + 0x27c],0x0     ; 004b43ad
    MOV dword ptr [EBX + 0x284],0x0     ; 004b43b7
    MOV dword ptr [EBX + 0x280],0x0     ; 004b43c1
    MOV dword ptr [EBX + 0xec],0x0      ; 004b43cb
    MOV dword ptr [EBX + 0xf0],0x0      ; 004b43d5
    MOV dword ptr [EBX + 0x438],0x0     ; 004b43df
    PUSH EBX                            ; 004b43e9
    MOV dword ptr [EBX + 0x290],0x1     ; 004b43ea
    XOR AH,AH                           ; 004b43f4
    MOV dword ptr [EBX + 0x294],0xbf800000 ; 004b43f6
    MOV byte ptr [0x01d225c8],AH        ; 004b4400 | DAT_01d225c8
    MOV byte ptr [EBX + 0xa7c],AH       ; 004b4406
    CALL core_game.cpp_FUN_004c4d10     ; 004b440c
        ;   XREF to: 004c4d10 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004c4d10()
    ADD ESP,0x4                         ; 004b4411
    MOV EAX,EBX                         ; 004b4414
    POP EBX                             ; 004b4416
    RET                                 ; 004b4417

